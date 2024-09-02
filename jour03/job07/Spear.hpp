#ifndef SPEAR_HPP
#define SPEAR_HPP

#include "Weapon.hpp"

class Spear : public Weapon {

private:
    int range;
    int power;

public:
    Spear();
    
    void attack(Character& target) override;
    
    int getRange() const override;
    
    int getPower() const override;

    ~Spear();
};

#endif