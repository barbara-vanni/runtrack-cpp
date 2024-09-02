#ifndef SWORD_HPP
#define SWORD_HPP

#include "Weapon.hpp"

class Sword : public Weapon {

private:
    int range;
    int power;

public:
    Sword();
    
    void attack(Character& target) override;
    
    int getRange() const override;
    
    int getPower() const override;

    ~Sword();
};

#endif