//
// Created by camix on 15/05/19.
//

#include "Editor.h"


Editor::Editor(Window &window, std::string &yamlPath) :
window(window), stage(window, &current, HEIGHT_PROPORTION, yamlPath),
menu(window, &current) {
    this->current = INVALID_CURRENT;
}

Editor::~Editor() {}

void Editor::draw(int x, int y) {
    window.clear();
    stage.draw(x, y);
    menu.draw();
    window.render();
}

void Editor::handleMouseButtonDown(SDL_Event* event) {
    MouseButton e(event);
    this->menu.handleMouseButtonDown(e);
    this->stage.handleMouseButtonDown(e);
}

void Editor::handleMouseDoubleClick(SDL_Event *event) {
        MouseButton e(event);
    this->stage.handleMouseDoubleClick(e);
}

void Editor::handleMouseButtonUp(SDL_Event *event) {
    MouseButton e(event);
    this->menu.handleMouseButtonUp(e);
    this->stage.handleMouseButtonUp(e);
}

void Editor::handleMouseRightClick(SDL_Event *event) {
    MouseButton e(event);
    this->stage.handleMouseRightClick(e);
}



void Editor::save(std::string &yamlPath) {
    stage.save(yamlPath);
}

void Editor::handleLeft() {
    stage.handleLeft();
}

void Editor::handleRight() {
    stage.handleRight();
}

void Editor::handleUp() {
    stage.handleUp();
}

void Editor::handleDown() {
    stage.handleDown();
}
