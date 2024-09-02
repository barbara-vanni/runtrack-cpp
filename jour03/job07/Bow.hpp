#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"

class Bow : public Weapon {

private:
    int range;
    int power;

public:
    Bow();
    
    void attack(Character& target) override;
    
    int getRange() const override;
    
    int getPower() const override;

    ~Bow();
};

#endif