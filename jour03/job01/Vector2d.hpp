#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <iostream>
#include <cmath>


class Vector2d{
    public:
        Vector2d(double x, double y);
        ~Vector2d();

        void display() const;
        double distanceTo(Vector2d v);

        //surchrge d'operateur pour addition et soustraction 
        Vector2d operator+(Vector2d const& v);
        Vector2d operator-(Vector2d const& v);
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
    private:
        double x;
        double y;
};

#endif