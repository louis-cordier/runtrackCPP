//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <variant>
#include <string>
using namespace std;

int main() {
    // Déclaration d'un tableau hétérogène avec std::variant
    variant<int, string, double> tableau[] = {
        2019,
        "La Plateforme",
        3.14,
        "Etudiants"
    };

    // Affichage des adresses et valeurs
    for (int i = 0; i < 4; ++i) {
        cout << "Adresse de l'element " << i << " : " << &tableau[i] << endl;
        cout << "Valeur de l'element " << i << " : ";

        visit([](auto&& arg) {
            cout << arg << endl;
        }, tableau[i]);
    }

    return 0;
}
