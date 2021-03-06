//
// Created by camix on 22/05/19.
//

#include <iostream>
#include "Chell.h"

Chell::Chell(std::string &path, Window &window, int totalFrames, int id, int w, int h) :
        AnimatedObject(path, window, totalFrames, id, w, h) {}

Chell::~Chell() = default;

std::pair<float, float> Chell::matrixPosToCenterOfMass(const std::pair<int, int> &position) {
    return this->rectangleMatrixPosToCenterOfMass(position, CHELL_WIDTH, CHELL_HEIGHT);
}

std::pair<int, int> Chell::centerOfMassToMatrixPos(const std::pair<float, float> &pair) {
    return this->rectangleCenterOfMassToMatrixPos(pair, CHELL_WIDTH, CHELL_HEIGHT);
}