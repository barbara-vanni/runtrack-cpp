#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Entrez un nombre entier : "  << endl;  
    cin >> num;

    if (num % 2 == 0) {
        cout << "Le nombre est pair" << endl;
    } else {
        cout << "Le nombre est impair" << endl;
    }

    return 0;
}