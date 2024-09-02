#include "ShapeFactory.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

int main() {

    std::unique_ptr<Shape> circle = ShapeFactory::createShape<Circle>();
    circle->draw();

    std::unique_ptr<Shape> rectangle = ShapeFactory::createShape<Rectangle>();
    rectangle->draw(); 

    return 0;
}
