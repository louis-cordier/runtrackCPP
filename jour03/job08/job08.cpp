//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <cstring> // pour std::strlen

int main() {
    const int TAILLE_MAX = 100; // taille max du tableau
    char tab[TAILLE_MAX];

    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(tab, TAILLE_MAX); // lecture sécurisée avec gestion d'espaces

    // Ajout du caractère de fin '\0' est automatique avec getline
    // mais on peut le faire explicitement si besoin :
    tab[std::strlen(tab)] = '\0';

    std::cout << "La chaine stockee est : " << tab << std::endl;

    return 0;
}
