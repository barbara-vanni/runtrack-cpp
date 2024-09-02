#include "Vector2d.hpp"
#include <iostream>


int main()
{
    Vector2d v(3, 4);
    v.display();
    // v.setX(5);
    // v.setY(6);
    // v.display();
    Vector2d v2(1, 2);
    v.distanceTo(v2);

    return 0;
}