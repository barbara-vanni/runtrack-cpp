#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Character.hpp"
#include "Weapon.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Sword.hpp"


class Player : public Character {
private:
    Weapon* currentWeapon;
    Bow bow;
    Spear spear;
    Sword sword;
    int weaponIndex;

public:
    Player(std::string name, int life, double x, double y);
    void attack(Character& target);  
    void switchWeapon();             
    void update();                   
    void draw() const override;      
};

#endif
