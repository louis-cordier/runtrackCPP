//
// Created by louis on 14/05/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nombre, copie, somme = 0, n = 0;

    cout << "Entrez un entier positif : ";
    cin >> nombre;

    // Vérification de validité
    if (nombre < 0) {
        cout << "Erreur : nombre négatif non autorisé." << endl;
        return 1;
    }

    copie = nombre;

    // Étape 1 : calculer le nombre de chiffres
    int temp = copie;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Étape 2 : calcul de la somme des puissances
    copie = nombre;
    while (copie != 0) {
        int chiffre = copie % 10;
        somme += pow(chiffre, n);
        copie /= 10;
    }

    // Résultat
    if (somme == nombre) {
        cout << nombre << " est un nombre narcissique." << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}
