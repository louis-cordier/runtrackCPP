//
// Created by louis on 15/05/2025.
//
#include <iostream>

int main() {
    int taille;

    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    int* tableau = new int[taille]; // allocation dynamique

    std::cout << "Entrez les elements du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    int sommePairs = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) {
            sommePairs += tableau[i];
        }
    }

    std::cout << "La somme des elements pairs est : " << sommePairs << std::endl;

    delete[] tableau; // libération mémoire

    return 0;
}
