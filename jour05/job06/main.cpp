#include <iostream>
#include "Personne.hpp"

int main() {
    // Création de plusieurs personnages avec des valeurs différentes
    Personne guerrier("Guerrier", 150, 0.2f);
    Personne mage("Mage", 80, 0.1f);
    Personne archer("Archer", 100, 0.15f);

    // Afficher leurs infos
    guerrier.afficherInfos();
    mage.afficherInfos();
    archer.afficherInfos();

    std::cout << "\n-- Simulation d'attaque --\n";

    // Le guerrier reçoit 50 points de dégâts
    guerrier.recevoirDegats(50);
    guerrier.afficherInfos();

    // Le mage reçoit 50 points de dégâts
    mage.recevoirDegats(50);
    mage.afficherInfos();

    return 0;
}
