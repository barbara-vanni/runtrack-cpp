#include <iostream>
using namespace std;

int doubleArray(int* tableau, int taille) {
    int somme = 0;

    for (int* ptr = tableau; ptr < tableau + taille; ++ptr) {
        *ptr *= 2; 
        somme += *ptr;
    }

    return somme;
}

void printArray(int* tableau, int taille) {
    cout << "elements du tableau apres avoir ete doubles : ";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printArray(tableau, taille);

    int somme = doubleArray(tableau, taille);

    printArray(tableau, taille);

    cout << "Somme des elements doubles : " << somme << endl;

    return 0;
}