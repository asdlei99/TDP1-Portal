//
// Created by cecix on 15/06/19.
//

#include <iostream>
#include "EnergyReceptorLeft.h"
#include "Chell.h"
#include "EnergyBall.h"

EnergyReceptorLeft::EnergyReceptorLeft(b2Body* body):
        EnergyReceptor(body, ER_LEFT_NAME) {
}

void EnergyReceptorLeft::handleCollision(Entity* entity) {
    std::string type = entity->getType();
    if (type == CHELL_NAME) {
        static_cast<Chell*>(entity)->onFloor(true);
    }
    if (type == EB_NAME) {
        EnergyBall* energyBall = static_cast<EnergyBall*>(entity);
        float x_pos = getHorizontalPosition();
        float x_eb = energyBall->getHorizontalPosition();
        if (x_eb < x_pos) {
            activate();
            energyBall->die();
        }
    }
}
