//
// Created by camix on 15/05/19.
//

#include "Editor.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600


Editor::Editor(Window& window) : window(window), stage(window, current, WIDTH_PROPORTION), menu(window, current) {
    this->current = INVALID_CURRENT;
}

Editor::~Editor() {}

void Editor::draw() {
    window.clear();
    menu.draw();
    stage.draw();
    window.render();
}

void Editor::handleMouseButtonDown(SDL_Event* event) {
    MouseButton e(event);
    this->menu.handleMouseButtonDown(e);
    this->stage.handleMouseButtonDown(e);
}

void Editor::handleMouseDoubleCick(SDL_Event *event) {
    MouseButton e(event);
    this->stage.handleMouseDoubleCick(e);
}

void Editor::handleMouseButtonUp(SDL_Event *event) {
    MouseButton e(event);
    this->menu.handleMouseButtonUp(e);
    this->stage.handleMouseButtonUp(e);
}