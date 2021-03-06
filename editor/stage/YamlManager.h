//
// Created by camix on 17/06/19.
//

#ifndef PORTAL_YAMLMANAGER_H
#define PORTAL_YAMLMANAGER_H

#define INV_FILE "The path was invalid."

#include <yaml-cpp/node/node.h>
#include <unordered_map>
#include <map>
#include "object/Object.h"
#include "LogicGates.h"

class YamlManager {
private:
    std::unordered_map<int, Object *> &textures;
    std::map<std::pair<int, int>, int> &tiles;
    LogicGates &logicGates;

public:
    YamlManager(std::unordered_map<int, Object *> &textures,
                    std::map<std::pair<int, int>, int> &tiles,
                    LogicGates &logicGates);

    void getObjects(Window &window, std::string &texturesPath);

    void getWidthAndHeightInMeters(int *width, int *eight);

    void readStage(std::string &texturesPath);

    void MetersToMatrixPos(std::pair<float, float> &position, int width);

    void writeStage(std::string &stagePath);
};




class YamlManagerException : public std::exception {
public:
    explicit YamlManagerException() = default;
};

class InvalidFile : public YamlManagerException {
public:
    const char* what() const noexcept override {
        return INV_FILE;
    }
    explicit InvalidFile() = default;
};


#endif //PORTAL_YAMLMANAGER_H