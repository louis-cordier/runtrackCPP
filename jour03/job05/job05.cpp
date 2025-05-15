//
// Created by louis on 15/05/2025.
//
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib> // pour std::stoi

bool estFormatValide(const std::string& heure) {
    if (heure.length() != 5) return false;
    return (std::isdigit(heure[0]) &&
            std::isdigit(heure[1]) &&
            heure[2] == 'h' &&
            std::isdigit(heure[3]) &&
            std::isdigit(heure[4]));
}

bool estHeureLogique(const std::string& heure) {
    int heures = std::stoi(heure.substr(0, 2));
    int minutes = std::stoi(heure.substr(3, 2));
    return (heures >= 0 && heures <= 23 && minutes >= 0 && minutes <= 59);
}

int main() {
    std::string saisie;

    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> saisie;

    if (estFormatValide(saisie) && estHeureLogique(saisie)) {
        std::cout << "Heure valide." << std::endl;
    } else {
        std::cout << "Heure invalide." << std::endl;
    }

    return 0;
}
