#include "GameObjectContainer.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "algorithm"
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

void GameObjectContainer::removeObject()
{
    gameObjects.erase(std::remove_if(gameObjects.begin(), gameObjects.end(),
        [](const std::unique_ptr<GameObject>& obj) {
            Character* character = dynamic_cast<Character*>(obj.get());
            if (character && !character->isAlive()) {
                std::cout << character->getName() << " est mort et a été retiré du jeu.\n";
                return true;
            }
            return false;
        }), gameObjects.end());
}

int GameObjectContainer::countEnemies() const {
    int count = 0;
    for (const auto& obj : gameObjects) {
        if (dynamic_cast<Enemy*>(obj.get())) {
            count++;
        }
    }
    return count;
}

