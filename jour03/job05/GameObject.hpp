#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <iostream>
#include <cmath>
#include "Vector2d.hpp"

class GameObject : public Vector2d
{
    public: 
    GameObject(double x, double y);
    ~GameObject();	

    virtual void draw() const = 0; 
    virtual void update() = 0;

};

#endif