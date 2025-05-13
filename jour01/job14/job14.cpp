//
// Created by louis on 13/05/2025.
//
#include <iostream>

int main() {
    long long nombre, nombreInverse = 0;

    // Demander à l'utilisateur d'entrer un nombre
    std::cout << "Veuillez entrer un nombre a inverser : ";
    std::cin >> nombre;

    // Sauvegarder le nombre original pour l'affichage final
    long long nombreOriginal = nombre;

    // Inverser le nombre
    while (nombre > 0) {
        // Extraire le dernier chiffre
        int dernierChiffre = nombre % 10;

        // Ajouter le dernier chiffre au nombre inversé
        nombreInverse = nombreInverse * 10 + dernierChiffre;

        // Supprimer le dernier chiffre du nombre original
        nombre /= 10;
    }

    // Afficher le résultat
    std::cout << "Le nombre " << nombreOriginal << " inverse est : " << nombreInverse << std::endl;

    return 0;
}