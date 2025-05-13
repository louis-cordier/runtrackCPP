//
// Created by louis on 13/05/2025.
//
#include <iostream>
#include <cmath>

int main() {
    int N;
    long long somme = 0;

    // Demander à l'utilisateur de saisir un entier N
    std::cout << "Veuillez entrer un entier N (N >= 5): ";
    std::cin >> N;

    // Vérifier que N est au moins égal à 5
    if (N < 5) {
        std::cout << "N doit être supérieur ou égal à 5." << std::endl;
        return 1;
    }

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; i++) {
        long long cube = pow(i, 3);
        somme += cube;
    }

    // Afficher le résultat
    std::cout << "La somme des cubes de 5^3 à " << N << "^3 est: " << somme << std::endl;

    return 0;
}