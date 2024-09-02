#include "Bow.hpp"
#include "Character.hpp"


Bow::Bow() : range(4), power(1) {}

void Bow::attack(Character& target) {
    target.takeDamage(power);
}

int Bow::getRange() const {
    return range;
}

int Bow::getPower() const {
    return power;
}

Bow::~Bow() {}