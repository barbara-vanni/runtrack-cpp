#include "GameObjectContainer.hpp"
#include <iostream>



void GameObjectContainer::addObject(std::unique_ptr<GameObject> obj)
{
    gameObjects.push_back(std::move(obj));
}

void GameObjectContainer::updateAll()
{
    for (auto& obj : gameObjects) {
        obj->update();
    }
}

void GameObjectContainer::drawAll() const
{
    for (const auto& obj : gameObjects) {
        obj->draw();
    }
}

