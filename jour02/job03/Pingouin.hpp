#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

class Pingouin : public Aquatique, public Terrestre
{
private:
    double vitesseGlisse;

    // Méthode d'initialisation pour gérer la colonie
    void ajouterDansColonie();

public:
    Pingouin(double vitesseNage = 0.0, double vitesseMarche = 0.0, double vitesseGlisse = 0.0);

    // Méthodes d'accès à la vitesse de glisse
    double getVitesseGlisse() const;
    void setVitesseGlisse(double vitesse);

    // Méthodes d'action
    void sePresenter() const;
    void glisser() const;

    // Constructeur de copie
    Pingouin(const Pingouin &pingouin);

    // Gestion de la colonie
    static std::vector<std::shared_ptr<Pingouin>> colonie;
    static void afficherColonie();

    ~Pingouin(); // Destructeur
};

#endif // PINGOUIN_HPP
