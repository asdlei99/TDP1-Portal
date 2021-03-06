//
// Created by cecix on 18/05/19.
//

#ifndef PORTAL_STOP_H
#define PORTAL_STOP_H


#include "Dynamic.h"

class Stop: public Dynamic {
public:
    explicit Stop(b2Body* body);
    void move(float force) override;
    ~Stop() override;
};

#endif //PORTAL_STOP_H
