//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int taille;

    // Étape 1 : Obtenir la taille
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    // Étape 2 : Allocation dynamique
    int* tableau = new int[taille];

    // Étape 3 : Remplir le tableau
    for (int i = 0; i < taille; ++i) {
        cout << "Entrez l'entier #" << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Étape 4 : Afficher le tableau
    cout << "\nContenu du tableau : ";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    // Étape 5 : Libérer la mémoire
    delete[] tableau;

    return 0;
}
