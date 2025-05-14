//
// Created by louis on 14/05/2025.
//
#include <iostream>
#include <iomanip>  // pour setw
using namespace std;

int main() {
    const int N = 10;

    // 1) En-tête des colonnes
    cout << "   ";  // espace pour la marge gauche
    for (int j = 1; j <= N; ++j) {
        cout << setw(4) << j;
    }
    cout << "\n";

    // 2) Séparateur horizontal
    cout << "   ";
    for (int j = 1; j <= N; ++j) {
        cout << "----";
    }
    cout << "\n";

    // 3) Corps de la table
    for (int i = 1; i <= N; ++i) {
        // numéro de ligne
        cout << setw(2) << i << " |";
        // produits
        for (int j = 1; j <= N; ++j) {
            cout << setw(4) << i * j;
        }
        cout << "\n";
    }

    return 0;
}
