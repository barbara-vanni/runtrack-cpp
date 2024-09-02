#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <iostream>
#include <cmath>

class GameObject : public Vector2d
{
    public: 
    GameObject(double x, double y);
    ~GameObject();	

    virtual void draw(); 
    virtual void update();
    
    private:
}