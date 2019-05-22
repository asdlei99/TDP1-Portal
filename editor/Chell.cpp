//
// Created by camix on 22/05/19.
//

#include <iostream>
#include "Chell.h"

Chell::Chell(const std::string &path, Window &window, int totalFrames) :
        AnimatedObject(path, window, totalFrames) {}

Chell::~Chell() = default;

bool Chell::canBeOn() {
    return false;
}

void Chell::draw(SDL_Rect* rect) {
    SDL_Rect newRect = {rect->x, rect->y - rect->h, rect->w, rect->h*2};
    AnimatedObject::draw(&newRect);
}

bool Chell::canBeAdd(int x, int y, std::map<std::pair<int, int>, std::string> &names) {
    auto below = names.find(std::make_pair(x, y + 1));
    auto over = names.find(std::make_pair(x, y - 1));
    return (below != names.end() && Object::canBeOn(below->second) && y != 0  && over == names.end());
}