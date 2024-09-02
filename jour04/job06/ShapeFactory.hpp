#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include <memory>
#include <type_traits>


class ShapeFactory {
public:
    
    template <typename T>
    static std::unique_ptr<T> createShape() {

        static_assert(std::is_base_of<Shape, T>::value, "T doit dériver de Shape");
        
        return std::make_unique<T>();
    }
};

#endif
