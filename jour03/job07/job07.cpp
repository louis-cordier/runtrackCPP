//
// Created by louis on 15/05/2025.
//
#include <iostream>

int main() {
    const int TAILLE = 10;
    int T[TAILLE];

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i = 0; i < TAILLE; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> T[i];
    }

    int indiceMax = 0;

    for (int i = 1; i < TAILLE; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    std::cout << "L'indice du plus grand element est : " << indiceMax << std::endl;

    return 0;
}
