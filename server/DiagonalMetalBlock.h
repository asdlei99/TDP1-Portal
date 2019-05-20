//
// Created by cecix on 13/05/19.
//

#ifndef PORTAL_DIAGONALMETALBLOCK_H
#define PORTAL_DIAGONALMETALBLOCK_H

#include <Box2D/Dynamics/b2Body.h>
#include "Entity.h"

class DiagonalMetalBlock: public Entity  {
private:
    b2Body* body;

public:
    explicit DiagonalMetalBlock(b2Body* body);
    float getHorizontalPosition();
    float getVerticalPosition();
    virtual void handleCollision(Entity* entity) override;
};


#endif //PORTAL_DIAGONALMETALBLOCK_H
