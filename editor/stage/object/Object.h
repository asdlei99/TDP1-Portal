//
// Created by camix on 22/05/19.
//

#ifndef PORTAL_OBJECT_H
#define PORTAL_OBJECT_H

#include <vector>
#include <unordered_map>
#include <map>
#include <sstream>
#include "../../../common/Sprite.h"
#include "ObjectException.h"
#include "../../../common/constants.h"

#define POSITIONS_ABOVE (h - 1)
#define WITHOUT_GRAVITY_SENTINEL "WithoutGravitySentinel"
#define GRAVITY_SENTINEL "GravitySentinel"

class Object {
protected:
    int w;
    int h;
    std::string name;

public:
    Object(std::string name, int w, int h);

    virtual void draw(SDL_Rect *rect) = 0;

    virtual void addTo(int x, int y, std::map<std::pair<int, int>,
            std::string> &tiles, std::unordered_map<std::string,
            Object *>& texturesL, bool needGravitySentinel = false);

    virtual void setName(std::pair<int, int>& position,
                    std::string &enteredName);

    void addWithGravityTo(int x, int y,
                    std::map<std::pair<int, int>,std::string> &tiles,
                    std::unordered_map<std::string, Object *>& textures);

    virtual void removeFrom(int x, int y, std::map<std::pair<int, int>,
                     std::string> &tiles,
                     std::unordered_map<std::string,
                     Object *> &textures);

    virtual bool hasGravity();
    virtual void addCondition(std::pair<int, int> position,
                    std::string& condition);

    virtual bool doesThisNameExist(std::string &string);


    virtual std::pair<float, float> rectangleCenterOfMass(
                     const std::pair<int, int> &position,
                     float w, float h);
    virtual std::pair<float, float> triangleCenterOfMass(
                    const std::pair<float, float> &a,
                    const std::pair<float, float> &b,
                    const std::pair<float, float> &c);

    virtual std::pair<float, float> centerOfMass(
                    const std::pair<int, int> &position) = 0;

    virtual bool hasCondition();
};

#endif //PORTAL_OBJECT_H
