//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, x;

    // Saisie des bornes a et b avec vérification que a < b
    cout << "Entrez la borne a (entier naturel) : ";
    cin >> a;
    cout << "Entrez la borne b (entier naturel) : ";
    cin >> b;

    if (a >= b) {
        cout << "Erreur : a doit etre strictement inferieur a b." << endl;
        return 1; // Fin prématurée du programme
    }

    // Saisie de l'entier à tester
    cout << "Entrez un entier a tester : ";
    cin >> x;

    // Vérification
    if (x >= a && x <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}
