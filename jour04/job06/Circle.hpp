#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:

    void draw() const override {
        std::cout << "Dessin d'un cercle." << std::endl;
    }
};

#endif
