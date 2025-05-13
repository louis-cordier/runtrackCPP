//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    double prixHT, kilos, tauxTVA, prixTTC;

    // Saisie des données
    cout << "Entrez le prix HT par kilo de carottes (en euros) : ";
    cin >> prixHT;

    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> kilos;

    cout << "Entrez le taux de TVA (en %) : ";
    cin >> tauxTVA;

    // Calcul du prix TTC
    prixTTC = prixHT * kilos * (1 + tauxTVA / 100);

    // Affichage du prix TTC
    cout << "Le prix TTC à payer est : " << prixTTC << " euros" << endl;

    return 0;
}
