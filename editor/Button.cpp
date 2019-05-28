//
// Created by camix on 22/05/19.
//

#include <iostream>
#include "Button.h"

Button::Button(std::string& path, Window& window, const std::string& name, int w, int h) :
    StaticObject(path, window, name, w, h) {}

void Button::setName() {
    std::cerr << "Soy un boton" << std::endl;
}

Button::~Button() = default;
