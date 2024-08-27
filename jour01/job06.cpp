#include <iostream>
using namespace std;

int main() {
    float prixHT;
    float tva;
    float kilo;
    float prixTTC;

    cout << "Entrez le prix HT d'1 kilo de carotte: " << endl;
    cin >> prixHT;

    cout << "Entrez le taux de TVA (ex: 15%): " << endl;
    cin >> tva;

    cout << "Entrez le poids net pour les carottes (en kilos): " << endl;
    cin >> kilo;

    prixTTC = prixHT * kilo * (1 + tva / 100);

    cout << "Le prix TTC pour " << kilo << " kilos de carottes est de : " << prixTTC << " euros." << endl;

    return 0;
}