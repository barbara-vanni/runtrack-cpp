// Terrestre.cpp

#include "Terrestre.hpp"
#include <iostream>

Terrestre::Terrestre(double vitesse) : vitesseMarche(vitesse) {}

double Terrestre::getVitesseMarche() const {
    return vitesseMarche;
}

void Terrestre::setVitesseMarche(double vitesse) {
    vitesseMarche = vitesse;
}

void Terrestre::marcher() const {
    if (vitesseMarche > 0) {
        std::cout << "L'animal marche a une vitesse de " << vitesseMarche << " m/s." << std::endl;
    } else {
        std::cout << "L'animal ne peut pas marcher car sa vitesse est de 0 m/s." << std::endl;
    }
}

Terrestre::~Terrestre() {}
