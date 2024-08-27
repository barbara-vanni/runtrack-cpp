#include <iostream>
using namespace std;

int main() {
    int nombre;

    cout << "Entrez un nombre: " << endl;
    cin >> nombre;

    int reversed = 0;

    while (nombre != 0) {
        reversed = reversed * 10 + nombre % 10;
        nombre /= 10;
    }

    cout << "Le nombre inverse est: " << reversed << endl;
    return 0;
}