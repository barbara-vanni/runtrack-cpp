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

    std::unique_ptr<Player> player = std::make_unique<Player>("Hero", 100, 0, 0);
    std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>("Goblin", 20, 5, 5); 

    game.addObject(std::move(player));
    game.addObject(std::move(enemy));

    game.drawAll();
    game.updateAll();

    game.drawAll();

    // Decor decor(1, 2);
    // decor.draw();
    // decor.update();

    // Player player("Hero", 100, 0, 0);
    // Enemy enemy("Goblin", 20, 5, 5);

    // player.draw();
    // enemy.draw();

    // for (int i = 0; i < 5; ++i) {
    //     std::cout << "\n--- Tour " << i + 1 << " ---\n";
    //     player.update(); 
    //     player.info();
    //     enemy.update(player); 
    // }

    return 0;
}


