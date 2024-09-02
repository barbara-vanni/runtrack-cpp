#include "Pingouin.hpp"

// Initialisation de la colonie
std::vector<std::shared_ptr<Pingouin>> Pingouin::colonie;

Pingouin::Pingouin(double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), vitesseGlisse(vitesseGlisse)
{
    ajouterDansColonie();
}

Pingouin::Pingouin(const Pingouin &pingouin)
    : Aquatique(pingouin.getVitesseNage()), Terrestre(pingouin.getVitesseMarche()), vitesseGlisse(pingouin.vitesseGlisse)
{
    ajouterDansColonie();
}

double Pingouin::getVitesseGlisse() const
{
    return vitesseGlisse;
}

void Pingouin::setVitesseGlisse(double vitesse)
{
    vitesseGlisse = vitesse;
}

void Pingouin::sePresenter() const
{
    std::cout << "Bonjour, je suis un pingouin. Je nage a " << getVitesseNage()
              << " m/s, marche a " << getVitesseMarche() << " m/s, et glisse a "
              << vitesseGlisse << " m/s." << std::endl;
}

void Pingouin::glisser() const
{
    std::cout << "Le pingouin glisse a " << vitesseGlisse << " m/s." << std::endl;
}

void Pingouin::ajouterDansColonie()
{
    std::shared_ptr<Pingouin> p(this, [](Pingouin *ptr) {
        auto it = std::find_if(colonie.begin(), colonie.end(),
                               [ptr](const std::shared_ptr<Pingouin> &pingouin) {
                                   return pingouin.get() == ptr;
                               });

        if (it != colonie.end()) {
            colonie.erase(it);
        }
        delete ptr;
    });

    colonie.push_back(p);
}

void Pingouin::afficherColonie()
{
    std::cout << "Il y a " << colonie.size() << " pingouins dans la colonie." << std::endl;
}

Pingouin::~Pingouin()
{
    std::cout << "Pingouin detruit" << std::endl;
}
