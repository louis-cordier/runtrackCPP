//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>

bool estVoyelle(char c) {
    // Vérifie si le caractère est une voyelle minuscule ou majuscule
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    std::string texte = "vive la plateforme !";
    std::string sansVoyelles = "";

    for (char c : texte) {
        if (!estVoyelle(c)) {
            sansVoyelles += c; // Ajouter uniquement les non-voyelles
        }
    }

    std::cout << sansVoyelles << std::endl;

    return 0;
}
