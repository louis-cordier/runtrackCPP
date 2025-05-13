//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Saisie des trois entiers
    cout << "Entrez le premier entier : ";
    cin >> a;

    cout << "Entrez le deuxième entier : ";
    cin >> b;

    cout << "Entrez le troisième entier : ";
    cin >> c;

    // Détermination du plus grand
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    // Affichage du résultat
    cout << "Le plus grand nombre est : " << max << endl;

    return 0;
}
