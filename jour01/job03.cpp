#include <iostream>
using namespace std;


int main() {

    int num;
    float somme = 0;


    for (int i = 0; i < 5; i++) {
        cout << "Entrez un nombre : " << i + 1 << endl;
        cin >> num;
        somme += num;

    }

    cout << "La moyenne est : " << somme / 5 << endl;
    return 0;


}