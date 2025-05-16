//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    // Étape 1 : Initialiser un tableau statique d'entiers
    int tableau[5] = {10, 20, 30, 40, 50};

    // Étape 2 et 3 : Parcourir le tableau et afficher les adresses et valeurs
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " : valeur = " << tableau[i]
             << ", adresse = " << &tableau[i] << endl;
    }

    return 0;
}
