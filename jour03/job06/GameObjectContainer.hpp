#ifndef GAMEOBJECTCONTAINER_HPP
#define GAMEOBJECTCONTAINER_HPP

#include <vector>
#include <memory>
#include "GameObject.hpp"


class GameObjectContainer {
private:

    std::vector<std::unique_ptr<GameObject>> gameObjects;

public:
    GameObjectContainer() = default;
    ~GameObjectContainer() = default;

    
    void addObject(std::unique_ptr<GameObject> obj);

    void updateAll();

    void drawAll() const;
};

#endif
