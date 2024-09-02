#include "Vector2d.hpp"
#include "GameObject.hpp"
#include "Character.hpp"
#include "Decor.hpp"
#include "Weapon.hpp"
#include "Bow.hpp"
#include "Sword.hpp"
#include "Spear.hpp"
#include <iostream>


int main()
{
    // creation décor 
    Decor decor(1, 2);
    decor.draw();
    decor.update();

    // creation perso
    Character perso("Bob", 20, 3, 4);
    perso.info();
    perso.draw();
    perso.update();
    perso.takeDamage(5);
    perso.info();

    Character mechant("Bill", 10, 5, 6);
    mechant.info();

    // creation arme 
    Bow arc;
    arc.attack(perso);
    perso.info();

    return 0;
}