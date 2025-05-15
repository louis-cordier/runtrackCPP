//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>

bool estIncluse(const std::string& a, const std::string& b) {
    return (b.find(a) != std::string::npos);
}

int main() {
    std::string chaine1, chaine2;

    std::cout << "Entrez la premiere chaine : ";
    std::getline(std::cin, chaine1);

    std::cout << "Entrez la deuxieme chaine : ";
    std::getline(std::cin, chaine2);

    if (estIncluse(chaine1, chaine2)) {
        std::cout << "Resultat : vrai (la premiere chaine est incluse dans la deuxieme)" << std::endl;
    } else {
        std::cout << "Resultat : faux (la premiere chaine n'est pas incluse)" << std::endl;
    }

    return 0;
}
