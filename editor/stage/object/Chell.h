//
// Created by camix on 22/05/19.
//

#ifndef PORTAL_CHELL_H
#define PORTAL_CHELL_H


#include "StaticObject.h"
#include "AnimatedObject.h"

class Chell : public AnimatedObject {
public:
    Chell(std::string &path, Window &window,
            int totalFrames, int id, int w, int h);
    ~Chell();

    //void addTo(int x, int y, std::map<std::pair<int, int>, std::string>& tiles) override;
    std::pair<float, float> matrixPosToCenterOfMass(
            const std::pair<int, int> &position) override;

    std::pair<int, int> centerOfMassToMatrixPos(
            const std::pair<float, float> &pair) override;
};


#endif //PORTAL_CHELL_H
