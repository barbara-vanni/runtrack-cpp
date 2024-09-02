#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <memory>


class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& shapeType) {
        if (shapeType == "Circle") {
            return std::make_unique<Circle>();
        } else if (shapeType == "Rectangle") {
            return std::make_unique<Rectangle>();
        } else {
            return nullptr;
        }
    }
};

#endif
