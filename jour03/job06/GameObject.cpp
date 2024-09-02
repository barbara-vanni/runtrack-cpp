#include "GameObject.hpp"
#include "Vector2d.hpp"
#include <iostream>


GameObject::GameObject(double x, double y) : Vector2d(x, y){}

GameObject::~GameObject() {}