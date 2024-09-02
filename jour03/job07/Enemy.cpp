#include "Enemy.hpp"
#include <iostream>
#include <cmath>

Enemy::Enemy(std::string name, int life, double x, double y)
    : Character(name, life, x, y) {}

void Enemy::update(Player& player) {

    double distanceToPlayer = this->distanceTo(player);
    
    if (distanceToPlayer > 1) {

        std::cout << name << " se rapproche du joueur.\n";
        double deltaX = player.getX() - this->getX();
        double deltaY = player.getY() - this->getY();
        double rad = std::sqrt(deltaX * deltaX + deltaY * deltaY);
        setX(getX() + deltaX / rad);
        setY(getY() + deltaY / rad);
    } else {

        std::cout << name << " est à portée et attaque le joueur !\n";
        player.takeDamage(1); 
    }
}

void Enemy::draw() const {
    std::cout << "Enemy " << this->getName() << " dessiné à la position (" << getX() << ", " << getY() << ")\n";
}
