#ifndef DECOR_HPP
#define DECOR_HPP

#include <iostream>
#include <string>
#include "GameObject.hpp"

class Decor : public GameObject
{
    public:
        Decor(double x, double y);
        void draw() const override;
        void update() override;
        ~Decor();
};

#endif