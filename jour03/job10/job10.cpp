//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>
#include <algorithm> // pour std::swap

int main() {
    std::string str1;
    std::string string2 = "Bonjour";

    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str1);

    // Tri lexicographique (ordre alphabétique)
    if (str1 > string2) {
        std::swap(str1, string2);
    }

    std::cout << "Chaines triees dans l'ordre lexicographique :" << std::endl;
    std::cout << str1 << std::endl;
    std::cout << string2 << std::endl;

    return 0;
}
