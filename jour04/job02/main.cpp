#include "Box.hpp"

int main() {
    
    Box<int> intBox(123);
    std::cout << "Box contient : " << intBox.getElement() << std::endl;
    
    Box<std::string> strBox("Hello");
    std::cout << "Box contient : " << strBox.getElement() << std::endl;

    strBox.setElement("World");
    std::cout << "Box contient maintenant : " << strBox.getElement() << std::endl;

    return 0;
}