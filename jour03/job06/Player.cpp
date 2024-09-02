#include "Player.hpp"
#include <iostream>

Player::Player(std::string name, int life, double x, double y)
    : Character(name, life, x, y), weaponIndex(0), currentWeapon(&bow) {}

void Player::attack(Character& target) {
    if (currentWeapon) {
        std::cout << "Le joueur attaque avec " << typeid(*currentWeapon).name() << " !\n";
        currentWeapon->attack(target);
    }
}

void Player::switchWeapon() {
    weaponIndex = (weaponIndex + 1) % 3;
    switch (weaponIndex) {
        case 0:
            currentWeapon = &bow;
            break;
        case 1:
            currentWeapon = &spear;
            break;
        case 2:
            currentWeapon = &sword;
            break;
    }
    std::cout << "Le joueur change d'arme pour " << typeid(*currentWeapon).name() << "\n";
}

void Player::update() {
    std::cout << "Le joueur se met à jour.\n";
    attack(*this); 
    switchWeapon();  
}

void Player::draw() const {
    std::cout << "Player " << this->getName() << " dessiné à la position (" << getX() << ", " << getY() << ")\n";
}
