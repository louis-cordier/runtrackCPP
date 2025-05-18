#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur(5, 10); // Position initiale

    joueur.afficherPosition();

    joueur.deplacer(3, -2); // Mouvement 1
    joueur.afficherPosition();

    joueur.deplacer(-1, 4); // Mouvement 2
    joueur.afficherPosition();

    return 0;
}
