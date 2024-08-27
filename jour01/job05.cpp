#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Entrez un premier nombre entier : " << endl;
    cin >> num1;
    cout << "Entrez un deuxieme nombre entier : " << endl;
    cin >> num2;

    cout << " Les nombres avant permutation sont : " << "n = " << num1 << " et m = " << num2 << endl;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << " Les nombres apres permutation sont : " << "n = " << num1 << " et m =  " << num2 << endl;

    return 0;
}