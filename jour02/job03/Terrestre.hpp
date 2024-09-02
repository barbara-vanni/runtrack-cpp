//terrestre class

#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class Terrestre
{
private:
    double vitesseMarche;

public:

    Terrestre(double vitesse = 0.0);
    ~Terrestre();

    double getVitesseMarche() const;

    void setVitesseMarche(double vitesse);

    virtual void marcher() const;
};

#endif // TERRESTRE_HPP