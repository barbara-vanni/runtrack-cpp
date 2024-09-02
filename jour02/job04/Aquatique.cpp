// Aquatique.cpp

#include "Aquatique.hpp"
#include <iostream>

Aquatique::Aquatique(double vitesse) : vitesseNage(vitesse) {}

double Aquatique::getVitesseNage() const {
    return vitesseNage;
}

void Aquatique::setVitesseNage(double vitesse) {
    vitesseNage = vitesse;
}

void Aquatique::nager() const {
    if (vitesseNage > 0) {
        std::cout << "L'animal nage a une vitesse de " << vitesseNage << " m/s." << std::endl;
    } else {
        std::cout << "L'animal ne peut pas nager car sa vitesse est de 0 m/s." << std::endl;
    }
}

Aquatique::~Aquatique() {}


