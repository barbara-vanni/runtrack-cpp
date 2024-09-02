#include "Character.hpp"
#include "GameObject.hpp"


Character::Character(std::string name, int life, double x, double y) : GameObject(x, y), name(name), life(life) {}


Character::~Character() {}

bool Character::isAlive() const {
    return life > 0; 

}

void Character::info() const {
    std::cout << "Nom : " << name << std::endl;
    std::cout << "Vie : " << life << std::endl;
    std::cout << "Position : (" << x << ", " << y << ")" << std::endl;
}

  
void Character::draw() const {
    std::cout << this->name << " est dessiné" << std::endl;
}

void Character::update() {
    std::cout << name << " se déplace à une nouvelle position.\n";
    setX(x + 1); 
    setY(y + 1); 
    std::cout << this->name << "se trouve à nouvelle position : (" << x << ", " << y << ")\n";
}

void Character::takeDamage(int damage) {
    this->life -= damage;
    std::cout << name << " a subi " << damage << " dégâts.\n";
}
