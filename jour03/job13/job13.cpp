//
// Created by louis on 15/05/2025.
//
#include <iostream>

int main() {
    const int tailleA = 5;
    const int tailleB = 6;
    int A[tailleA] = {1, 3, 5, 7, 9};
    int B[tailleB] = {2, 4, 6, 8, 10, 12};
    int C[tailleA + tailleB];

    int i = 0, j = 0, k = 0;

    // Fusion des deux tableaux
    while (i < tailleA && j < tailleB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copier le reste de A s'il y en a
    while (i < tailleA) {
        C[k++] = A[i++];
    }

    // Copier le reste de B s'il y en a
    while (j < tailleB) {
        C[k++] = B[j++];
    }

    // Affichage du tableau fusionné
    std::cout << "Tableau fusionne : ";
    for (int idx = 0; idx < tailleA + tailleB; ++idx) {
        std::cout << C[idx] << " ";
    }
    std::cout << std::endl;

    return 0;
}
