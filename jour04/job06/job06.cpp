//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Étape 1 : Déclarer les variables
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    string caractere = "La Plateforme";

    // Étape 2 : Afficher les valeurs
    cout << "Valeur de entier : " << entier << endl;
    cout << "Valeur de flottant : " << flottant << endl;
    cout << "Valeur de reel : " << reel << endl;
    cout << "Valeur de caractere : " << caractere << endl;

    // Étape 3 : Afficher les adresses mémoire
    cout << "Adresse de entier : " << &entier << endl;
    cout << "Adresse de flottant : " << &flottant << endl;
    cout << "Adresse de reel : " << &reel << endl;
    cout << "Adresse de caractere : " << &caractere << endl;

    return 0;
}
