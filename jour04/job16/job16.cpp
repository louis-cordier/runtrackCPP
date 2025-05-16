//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int tableau[] = {5, 12, 7, 3, 25, 9};  // Le tableau d'entiers
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Initialiser max avec le premier élément
    int max = tableau[0];

    // Parcourir le tableau pour trouver le maximum
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i]; // Mettre à jour si une valeur plus grande est trouvée
        }
    }

    cout << "La valeur maximale du tableau est : " << max << endl;

    return 0;
}
