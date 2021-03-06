//
// Created by camix on 13/05/19.
//

#ifndef PORTAL_MENU_H
#define PORTAL_MENU_H

#include <vector>
#include <SDL.h>
#include <SDL_image.h>
#include "../common/Window.h"
#include "../common/Sprite.h"
#include "MenuButton.h"
#include "MouseButton.h"

#define HEIGHT_PROPORTION 10


class Menu {
private:
    Window& window;
    int* current;
    std::vector<MenuButton*> options;
    struct SDL_Rect* me;
    void set();

public:
    explicit Menu(Window &window, int *current);
    ~Menu();
    void draw();
    void handleMouseButtonDown(MouseButton& event);
    void handleMouseButtonUp(MouseButton& event);
};


#endif //PORTAL_MENU_H
