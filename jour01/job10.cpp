#include <iostream>
using namespace std;

int trouverPlusPetit(int* tableau[], int taille) {
    int* plusPetit = tableau[0]; 

    for (int i = 0; i < taille; ++i) {
        if (*tableau[i] < *plusPetit) {
            plusPetit = tableau[i]; 
        }
    }

    return *plusPetit;
}

int main() {
    int a = 6, b = 2, c = 3, d = 4, e = 5;
    
    int* tableau[] = {&a, &b, &c, &d, &e};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int plusPetit = trouverPlusPetit(tableau, taille);

    cout << "Le plus petit element est : " << plusPetit << endl;

    return 0;
}
