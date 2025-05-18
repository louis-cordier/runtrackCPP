#include <iostream>
#include "Joueur.hpp"

int main() {
    // Constructeur par défaut
    Joueur joueur1;
    joueur1.afficherPosition();

    // Constructeur avec x et y
    Joueur joueur2(3, 7);
    joueur2.afficherPosition();

    // Constructeur avec x, y et nom
    Joueur joueur3(10, 5, "Heros");
    joueur3.afficherPosition();

    return 0;
}
