//
// Created by cecix on 17/05/19.
//

#include <string>
#include <iostream>
#include "Button.h"
#include "Chell.h"
#include "BlueShot.h"
#include "OrangeShot.h"

Button::Button(b2Body* body):
    ItemActivable(BUTTON_NAME, body), dynamic(body) {
    body->SetUserData(this);
}

void Button::handleCollision(Entity *entity) {
    const std::string& type = entity->getType();
    if (type == ROCK_NAME) {
        Rock* rock = dynamic_cast<Rock*>(entity);
        float y_rock = rock->getVerticalPosition();
        float y_button = getVerticalPosition();
        if (y_rock > y_button) activate();
    } else if (type == CHELL_NAME) {
        Chell* chell = dynamic_cast<Chell*>(entity);
        chell->onFloor(true);
        float y_chell = chell->getVerticalPosition();
        float y_button = getVerticalPosition();
        if (y_chell > y_button) {
            activate();
        }
    } else {
        desactivate();
    }
    if (type == BLUE_SHOT_NAME) {
        dynamic_cast<BlueShot*>(entity)->die();
    }
    if (type == ORANGE_SHOT_NAME) {
        dynamic_cast<OrangeShot*>(entity)->die();
    }
}

void Button::update() {
    if (! dynamic.handleCollisions()) desactivate();
}
