#include <iostream>
#include <array>
using namespace std;

int main() {
    std::array<int, 5> const tableau { 6, 2, 3, 1, 5 };
    int min = tableau[0];

    for ( int element : tableau)
    {
        if (element < min) {
            min = element; 
        }
    }
    
    std::cout << "Le plus petit entier du tableau est : " << min << std::endl;
    return 0;
}