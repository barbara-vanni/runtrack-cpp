#include <iostream>


template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    int x = 5, y = 10;
    std::cout << "Le plus grand entre " << x << " et " << y << " est : " << maximum(x, y) << std::endl;

    double d1 = 3.14, d2 = 2.71;
    std::cout << "Le plus grand entre " << d1 << " et " << d2 << " est : " << maximum(d1, d2) << std::endl;


    std::string str1 = "pomme", str2 = "kiwi";
    std::cout << "Le plus grand entre " << str1 << " et " << str2 << " est : " << maximum(str1, str2) << std::endl;

    return 0;
}
