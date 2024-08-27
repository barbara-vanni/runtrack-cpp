// année bisextile ou non
#include <iostream>
using namespace std;


int main() {

    int annee;

    cout << "Entrez une annee: " << endl;
    cin >> annee;

    if (annee % 4 == 0) {
        if (annee % 100 == 0) {
            if (annee % 400 == 0) {
                cout << "L'annee " << annee << " est bisextile." << endl;
            } else {
                cout << "L'annee " << annee << " n'est pas bisextile." << endl;
            }
        } else {
            cout << "L'annee " << annee << " est bisextile." << endl;
        }
    } else {
        cout << "L'annee " << annee << " n'est pas bisextile." << endl;
    }

    return 0;

}