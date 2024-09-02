#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <string>

class Character : public GameObject {
protected:
    std::string name;
    int life;

public:
    Character(std::string name, int life, double x, double y);
    ~Character();

    bool isAlive() const;
    void draw() const override;
    void update() override;
    void takeDamage(int damage);
    void info() const;

    std::string getName() const { return name; }
    int getLife() const { return life; }

    double getX() const { return x; }
    double getY() const { return y; }
};

#endif
