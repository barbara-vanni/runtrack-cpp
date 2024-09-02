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
#include <iostream>


int main()
{

    Decor decor(1, 2);
    decor.draw();
    decor.update();

    Player player("Hero", 100, 0, 0);
    Enemy enemy("Goblin", 20, 5, 5);

    player.draw();
    enemy.draw();

    for (int i = 0; i < 5; ++i) {
        std::cout << "\n--- Tour " << i + 1 << " ---\n";
        player.update(); 
        player.info();
        enemy.update(player); 
    }

    return 0;
}


