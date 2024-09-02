// Pingouin.cpp

#include "Pingouin.hpp"
#include <iostream>

Pingouin::Pingouin(double vitesseNage, double vitesseMarche) : Aquatique(vitesseNage), Terrestre(vitesseMarche) {}

void Pingouin::sePrensenter() const {
    std::cout << "Le pingouin fait cui cui." << std::endl;
}

Pingouin::~Pingouin() {}

