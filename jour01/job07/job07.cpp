//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un entier
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        cout << nombre << " est pair." << endl;
    } else {
        cout << nombre << " est impair." << endl;
    }

    return 0;
}
