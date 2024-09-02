// Pingouin.hpp 

#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{   
    private: 
        double vitesseGlisse;
    public:
        Pingouin(double vitesseNage = 0.0, double vitesseMarche = 0.0, double vitesseGlisse = 0.0);
        double getVitesseGlisse() const;
        void setVitesseGlisse(double vitesse);
        void sePrensenter() const;
        void glisser();
        Pingouin(const Pingouin &pingouin);
        ~Pingouin();
};

#endif // PINGOUIN_HPP
