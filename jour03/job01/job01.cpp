//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>
#include <cctype> // pour toupper

int main() {
    std::string texte = "vive la plateforme !";

    for (char& c : texte) {
        c = std::toupper(c); // convertit chaque lettre en majuscule si c’est une lettre
    }

    std::cout << texte << std::endl;

    return 0;
}
