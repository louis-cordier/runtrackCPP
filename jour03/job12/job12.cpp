//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <cstdlib>  // pour rand, srand
#include <ctime>    // pour time (initialisation seed)

int main() {
    const int MAX = 100;
    const int chancesMax = 7; // nombre de chances
    int nombreMystere, proposition, essais = 0;

    // Initialisation du générateur aléatoire
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    nombreMystere = std::rand() % (MAX + 1); // nombre entre 0 et 100 inclus

    std::cout << "=== Bienvenue au jeu Nombre Mystere ===" << std::endl;
    std::cout << "Devinez le nombre entre 0 et " << MAX << "." << std::endl;
    std::cout << "Vous avez " << chancesMax << " chances." << std::endl;

    bool gagne = false;

    while (essais < chancesMax && !gagne) {
        std::cout << "Tentative " << essais + 1 << " : ";
        std::cin >> proposition;

        if (proposition < 0 || proposition > MAX) {
            std::cout << "Veuillez entrer un nombre entre 0 et " << MAX << "." << std::endl;
            continue; // ne compte pas comme une tentative
        }

        essais++;

        if (proposition == nombreMystere) {
            gagne = true;
        } else if (proposition < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else {
            std::cout << "Trop grand !" << std::endl;
        }
    }

    if (gagne) {
        std::cout << "Bravo ! Vous avez trouve le nombre mystere en " << essais << " essais." << std::endl;
    } else {
        std::cout << "Dommage ! Vous avez perdu. Le nombre mystere était : " << nombreMystere << std::endl;
    }

    return 0;
}
