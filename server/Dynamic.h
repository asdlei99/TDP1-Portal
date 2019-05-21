//
// Created by cecix on 18/05/19.
//

#ifndef PORTAL_DYNAMIC_H
#define PORTAL_DYNAMIC_H

#define delta 0.01
#define impulseFactor 50
#define jumpFactor 4

#include <Box2D/Dynamics/b2Body.h>

class Dynamic {
private:
    b2Body* body;
    float impulse;

public:
    explicit Dynamic(b2Body* body);
    virtual ~Dynamic();
    virtual void move(float force);
    void jump();
    void moveRight(float force);
    void moveLeft(float force);
    void moveDown(float force);
    void moveUp(float force);
    void stop(float force);
    void flyHorizontal();
    void flyVertical();
    bool isColliding();
    void downloadToEarth();
    bool handleCollisions();
    void eliminateGravity();
    float getHorizontalPosition();
    float getVerticalPosition();
    float getHorizontalVelocity();
    float getVerticalVelocity();
};

#endif //PORTAL_DYNAMIC_H
