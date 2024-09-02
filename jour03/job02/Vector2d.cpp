#include "Vector2d.hpp"
#include <iostream>
#include <cmath>



Vector2d::Vector2d(double x, double y)
    : x(x), y(y)
{}

double Vector2d::getX()
{
    return 0.0f;
}

double Vector2d::getY()
{
    return 0.0f;
}

void Vector2d::setX(double x)
{
    this->x = x;
}

void Vector2d::setY(double y)
{
    this->y = y;
}

Vector2d Vector2d::operator+(Vector2d const&v)
{   
    Vector2d v1(0,0);
    v1.x = x + v.x;
    v1.y = y + v.y;
    return v1;
}

Vector2d Vector2d::operator-(Vector2d const&v)
{
    Vector2d v1(0,0);
    v1.x = x - v.x;
    v1.y = y - v.y;
    return v1;
}

double Vector2d::distanceTo(Vector2d v){

    std::cout << "distance entre les deux vecteurs est de " << sqrt(pow(v.x - x, 2) + pow(v.y - y, 2)) << " u " << std::endl;

    return sqrt(pow(v.x - x, 2) + pow(v.y - y, 2));

}

void Vector2d::display() const
{
    std::cout << "x: " << x << ", y: " << y << std::endl;
}


Vector2d::~Vector2d()
{}