#include "Spear.hpp"
#include "Character.hpp"


Spear::Spear() : range(2), power(2) {}

void Spear::attack(Character& target) {
    target.takeDamage(power);
}

int Spear::getRange() const {
    return range;
}

int Spear::getPower() const {
    return power;
}

Spear::~Spear() {}