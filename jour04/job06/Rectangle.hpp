#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
public:

    void draw() const override {
        std::cout << "Dessin d'un rectangle." << std::endl;
    }
};

#endif
