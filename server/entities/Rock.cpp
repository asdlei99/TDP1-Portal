//
// Created by cecix on 17/05/19.
//

#include <string>
#include "Rock.h"
#include "movements/MoveRight.h"
#include "movements/MoveLeft.h"
#include "movements/Stop.h"
#include "MetalBlock.h"
#include "entities/Chell.h"
#include "entities/Button.h"
#include "entities/EnergyBar.h"
#include "entities/BlueShot.h"
#include "OrangeShot.h"
#include "EnergyBall.h"
#include <Box2D/Dynamics/b2World.h>
#include <Box2D/Dynamics/b2Fixture.h>

Rock::Rock(b2Body* body):
        Entity(ROCK_NAME, body),
        dynamic(body) {
    this->actual_movement = new Stop(body);
    body->SetUserData(this);
    this->dead = false;
    this->grabbed = false;

    //Setting the category and mask bits
    b2Fixture* fixture = body->GetFixtureList();
    b2Filter filter = fixture->GetFilterData();
    filter.categoryBits = 0x1100;
    filter.maskBits = 0xFFFF;
    fixture->SetFilterData(filter);
}

Rock::~Rock() {
    delete actual_movement;
}

void Rock::handleCollision(Entity *entity) {
    const std::string& type = entity->getType();
    if (type == PORTAL_NAME) {
        Portal* portal = dynamic_cast<Portal*>(entity);
        Coordinate* target = portal->getTarget();
        if (target != nullptr) {
            teleport(target, portal->getPortalType());
        }
    }
    if (type == BLUE_SHOT_NAME) {
        dynamic_cast<BlueShot*>(entity)->die();
    }
    if (type == ORANGE_SHOT_NAME) {
        dynamic_cast<OrangeShot*>(entity)->die();
    }
    if (type == ENERGY_BAR_NAME) {
        die();
    }
    if (type == CHELL_NAME) {
        Chell* chell = dynamic_cast<Chell*>(entity);
        chell->onFloor(true);
        float y_chell = chell->getVerticalPosition();
        float y_rock = getVerticalPosition();
        float vy_rock = getVerticalVelocity();
        if (y_rock > y_chell && vy_rock == 0 && ! isGrabbed()) {
            chell->die();
        }
    }
    if (type == BUTTON_NAME) {
        Button* button = dynamic_cast<Button*>(entity);
        float y_button = button->getVerticalPosition();
        float y_rock = getVerticalPosition();
        if (y_rock > y_button) button->activate();
    }

    if (type == EB_NAME) {
        die();
        dynamic_cast<EnergyBall*>(entity)->die();
    }
}

bool Rock::isGrabbed() {
    return grabbed;
}

void Rock::elevate(Coordinate& coordinate) {
    this->grabbed = true;
    body->SetGravityScale(0);
    body->SetTransform(b2Vec2(coordinate.getX() + 1.01, coordinate.getY()), 0);
}

void Rock::release() {
    this->grabbed = false;
    activateGravity();
    body->ApplyLinearImpulse(b2Vec2(0, gameConfiguration.velocityRelease),
            body->GetWorldCenter(), true);
    body->ApplyForce(b2Vec2(0, gameConfiguration.elevationForce),
        body->GetWorldCenter(), true);
}

void Rock::activateGravity() {
    body->SetGravityScale(1);
}

void Rock::moveRight(Coordinate& coordinate) {
    destroyActualMovement();
    this->actual_movement = new MoveRight(body);
    body->SetTransform(b2Vec2(coordinate.getX() - 1.01, coordinate.getY()), 0);
}

void Rock::moveLeft(Coordinate& coordinate) {
    destroyActualMovement();
    this->actual_movement = new MoveLeft(body);
    body->SetTransform(b2Vec2(coordinate.getX() + 1.01, coordinate.getY()), 0);
}

void Rock::stop() {
    float velocity_y = body->GetLinearVelocity().y;
    if (velocity_y >= 0) velocity_y = 0;
    body->SetLinearVelocity(b2Vec2(0, velocity_y));
    destroyActualMovement();
    this->actual_movement = new Stop(body);
}

void Rock::destroyActualMovement() {
    delete this->actual_movement;
}

void Rock::update() {
    dynamic.handleCollisions();
    this->actual_movement->move(gameConfiguration.rockForce);
}

void Rock::downloadToEarth() {
    this->grabbed = false;
    body->SetGravityScale(1);
    body->ApplyLinearImpulse(b2Vec2(0, -gameConfiguration.velocityDownload), body->GetWorldCenter(), true);
}

void Rock::teleport(Coordinate* target, Direction type) {
    this->dynamic.teleport(target, type, false);
}

void Rock::die() {
    dead = true;
}

bool Rock::isDead() {
    return dead;
}
