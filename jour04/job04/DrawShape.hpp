#ifndef DRAWSHAPE_HPP
#define DRAWSHAPE_HPP

#include "Shape.hpp"


template <typename T>
void DrawShape(const T& shape) {
    static_assert(std::is_base_of<Shape, T>::value, "T doit dériver de Shape");
    shape.draw();
}

#endif
