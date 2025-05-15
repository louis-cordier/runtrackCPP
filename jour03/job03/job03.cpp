//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>

int main() {
    std::string chaine1 = "Bonjour";
    std::string chaine2 = "bonjour"; // modifie ici pour tester la différence

    if (chaine1 == chaine2) {
        std::cout << 0 << std::endl; // les chaînes sont identiques
    } else {
        std::cout << 1 << std::endl; // les chaînes sont différentes
    }

    return 0;
}
