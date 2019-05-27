//
// Created by camix on 22/05/19.
//

#ifndef PORTAL_CHELL_H
#define PORTAL_CHELL_H


#include "StaticObject.h"
#include "AnimatedObject.h"

class Chell : public AnimatedObject {
public:
    Chell(std::string &path, Window &window, int totalFrames, const std::string& name, int w, int h);
    ~Chell();
    void draw(SDL_Rect* rect) override;

    void addTo(int x, int y, std::map<std::pair<int, int>, std::string>& tiles) override;
};


#endif //PORTAL_CHELL_H