//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int nombre;

    // Saisie de l'entier par l'utilisateur
    cout << "Entrez un entier : ";
    cin >> nombre;

    // Affichage de la table de multiplication de 1 à 10
    cout << "Table de multiplication de " << nombre << " :" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << nombre << " x " << i << " = " << nombre * i << endl;
    }

    return 0;
}
