#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Character.hpp"


class Weapon {
public:
    virtual ~Weapon() {}
    
    virtual void attack(Character& target) = 0;
    
    virtual int getRange() const = 0;
    virtual int getPower() const = 0;
};

#endif
