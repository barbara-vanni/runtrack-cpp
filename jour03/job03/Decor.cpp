#include "Decor.hpp"
#include <iostream>

Decor::Decor(double x, double y) : GameObject(x, y) {}

void Decor::draw() const {
    std::cout << "Dessiner un décor à la position (" << x << ", " << y << ")\n";
}

void Decor::update() {
    std::cout << "Le décor ne bouge pas.\n";
}

Decor::~Decor() {}
