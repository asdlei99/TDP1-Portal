//
// Created by ndv on 6/23/19.
//

#include "ReceptorLeftView.h"
#include <string>

ReceptorLeftView::ReceptorLeftView(Window &window, int xPos, int yPos, int factor,
                               YAML::Node& texturesData) :
        View(window, xPos, yPos, factor, RECEPTOR_WIDTH, RECEPTOR_HEIGHT) {
    YAML::Node spritesData = texturesData[TEXTURES_ER_LEFT_KEY];
    for (YAML::const_iterator it = spritesData.begin();
         it != spritesData.end(); ++it) {
        YAML::Node node = *it;
        int buttonState = node["name"].as<int>();
        std::string path = node["path"].as<std::string>();
        Sprite *newSprite = new Sprite(path, window);
        sprites[buttonState] = newSprite;
    }
    receptorState = RECEPTOR_STATE_OFF;
}

ReceptorLeftView::~ReceptorLeftView() {
    for (auto it = sprites.begin(); it != sprites.end(); ++it){
        delete it->second;
    }
}

void ReceptorLeftView::setState(int state) {
    receptorState = state;
}

void ReceptorLeftView::playAnimation(const SDL_Rect &camera) {
    if (!checkCollisionWithCamera(camera)) return;
    Sprite* sprite = sprites[receptorState];
    SDL_Rect destRect = {viewPosX - camera.x,
                         viewPosY - camera.y,
                         int(viewWidthInMeters * mtpFactor),
                         int(viewHeightInMeters * mtpFactor)};;
    sprite->draw(&destRect);
}

