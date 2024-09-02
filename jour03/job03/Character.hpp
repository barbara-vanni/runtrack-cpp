#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "GameObject.hpp"

class Character : public GameObject
{
    public:
        Character(std::string name, int life, double x, double y);
        ~Character();
        void info() const;
        void draw() const override;
        void update() override;
        bool isAlive() const;
        void takeDamage(int damage);


    private: 
        std::string name;
        int life;
};

#endif