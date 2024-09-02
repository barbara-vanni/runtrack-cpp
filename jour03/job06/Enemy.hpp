#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Character.hpp"
#include "Player.hpp"


class Enemy : public Character {
public:
    Enemy(std::string name, int life, double x, double y);
    void update(Player& player);
    void draw() const override; 
};

#endif