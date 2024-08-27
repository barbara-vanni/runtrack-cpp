#include <iostream>

int main() {
    int n;

    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> n;

    int somme = 0;
    for (int i = 5; i <= n; i++){
        somme += i * i * i;
    }

    std::cout << "La somme des cubes de 5^3 a " << n << "^3 est: " << somme << std::endl;
    return 0;

}