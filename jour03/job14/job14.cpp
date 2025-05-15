//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>

// Fonction qui vérifie si une chaîne est un palindrome
bool estPalindrome(const std::string& s) {
    int debut = 0;
    int fin = s.length() - 1;
    while (debut < fin) {
        if (s[debut] != s[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    const int taille = 5;
    std::string tab[taille] = {"radar", "hello", "lvel", "stats", "world"};

    std::cout << "Palindromes trouves dans le tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        if (estPalindrome(tab[i])) {
            std::cout << tab[i] << std::endl;
        }
    }

    return 0;
}
