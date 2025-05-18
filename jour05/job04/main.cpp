#include <iostream>
#include "Joueur.hpp"

int main() {
    // Joueur par défaut
    Joueur joueur1;
    joueur1.afficherPosition();

    // Modification via setters
    joueur1.setX(15);
    joueur1.setY(20);
    joueur1.setNom("Explorateur");

    joueur1.afficherPosition();

    // Utilisation des getters
    std::cout << "Nom : " << joueur1.getNom() << std::endl;
    std::cout << "Coordonnees : (" << joueur1.getX() << ", " << joueur1.getY() << ")" << std::endl;

    return 0;
}
