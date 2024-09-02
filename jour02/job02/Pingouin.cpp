// Pingouin.cpp

#include "Pingouin.hpp"
#include <iostream>

Pingouin::Pingouin(double vitesseNage, double vitesseMarche, double vitesseGlisse) : Aquatique(vitesseNage), Terrestre(vitesseMarche) {}

void Pingouin::sePrensenter() const {
    std::cout << "Le pingouin fait cui cui." << std::endl;
}

void Pingouin::glisser() {
    std::cout << "Le pingouin glisse sur la glace a " << vitesseGlisse << " m/s ." << std::endl;
}

double Pingouin::getVitesseGlisse() const {
    return vitesseGlisse;
}

void Pingouin::setVitesseGlisse(double vitesse) {
    vitesseGlisse = vitesse;
}

Pingouin::Pingouin(const Pingouin &pingouin) : Aquatique(pingouin), Terrestre(pingouin) {

    std::cout << "Pingouin copie" << std::endl;
}




Pingouin::~Pingouin() {}

