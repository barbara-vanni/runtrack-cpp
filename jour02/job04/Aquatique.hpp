// Aquatique.hpp

#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class Aquatique
{
private:
    double vitesseNage;

public:

    Aquatique(double vitesse = 0.0);
    ~Aquatique();

    double getVitesseNage() const;

    void setVitesseNage(double vitesse);

    virtual void nager() const;
};

#endif // AQUATIQUE_HPP
