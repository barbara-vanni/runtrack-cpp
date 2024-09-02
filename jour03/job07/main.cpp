#include "Vector2d.hpp"
#include "GameObject.hpp"
#include "Character.hpp"
#include "Decor.hpp"
#include "Weapon.hpp"
#include "Bow.hpp"
#include "Sword.hpp"
#include "Spear.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "GameObjectContainer.hpp"
#include <iostream>


int main()
{
    GameObjectContainer game;
    bool dead = false;

    std::unique_ptr<Player> player = std::make_unique<Player>("Hero", 100, 0, 0);
    Player* p = player.get();
    game.addObject(std::move(player));
    // std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>("Goblin", 20, 5, 5); 

    game.addObject(std::make_unique<Enemy>("Gobelin", 20, 5, 5));
    game.addObject(std::make_unique<Enemy>("MegaGobelin", 50, 10, 6));
    game.addObject(std::make_unique<Enemy>("Troll", 30, 6, 7));

    int turn = 0;


    while (!dead) {
        std::cout << "Tour " << turn << std::endl;
        game.updateAll();
        game.drawAll();
        if (p->getLife() <= 0) {
            dead = true;
        }
        turn++;
    }

    return 0;
}


