#include "Vector2d.hpp"
#include "GameObject.hpp"
#include "Character.hpp"
#include "Decor.hpp"
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


    return 0;
}