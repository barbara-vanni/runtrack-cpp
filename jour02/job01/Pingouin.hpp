// Pingouin.hpp 

#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{   
    public:
        Pingouin(double vitesseNage = 0.0, double vitesseMarche = 0.0);
        void sePrensenter() const;
        ~Pingouin();
};

#endif // PINGOUIN_HPP
