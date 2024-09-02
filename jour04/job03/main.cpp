#include "Box.hpp"

int main() {
   
    Box<int> intBox(123);
    std::cout << "Box contient : " << intBox.getElement() << std::endl;

    Box<std::string> strBox("Hello");
    std::cout << "Box contient : " << strBox.getElement() << std::endl;

    int a = 42;
    Box<int*> intPtrBox(&a);
    std::cout << "Box contenant un pointeur : " << intPtrBox.getElement() << std::endl;

    std::string s = "World";
    Box<std::string*> strPtrBox(&s);
    std::cout << "Box contenant un pointeur : " << strPtrBox.getElement() << std::endl;

    return 0;
}
