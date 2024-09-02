#include "ShapeFactory.hpp"

int main() {
    std::unique_ptr<Shape> circle = ShapeFactory::createShape("Circle");
    if (circle) {
        circle->draw();
    } else {
        std::cout << "Type de forme non reconnu." << std::endl;
    }


    std::unique_ptr<Shape> rectangle = ShapeFactory::createShape("Rectangle");
    if (rectangle) {
        rectangle->draw(); 
    } else {
        std::cout << "Type de forme non reconnu." << std::endl;
    }


    std::unique_ptr<Shape> unknown = ShapeFactory::createShape("Triangle");
    if (unknown) {
        unknown->draw();
    } else {
        std::cout << "Type de forme non reconnu." << std::endl;
    }

    return 0;
}
