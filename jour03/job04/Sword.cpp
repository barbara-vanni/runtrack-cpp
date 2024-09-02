#include "Sword.hpp"
#include "Character.hpp"


Sword::Sword() : range(1), power(4) {}

void Sword::attack(Character& target) {
    target.takeDamage(power);
}

int Sword::getRange() const {
    return range;
}

int Sword::getPower() const {
    return power;
}

Sword::~Sword() {}