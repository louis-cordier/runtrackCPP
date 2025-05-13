//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int annee;

    // Demander à l'utilisateur de saisir une année
    cout << "Entrez une annee : ";
    cin >> annee;

    // Vérification si l'année est bissextile
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        cout << annee << " est une annee bissextile." << endl;
    } else {
        cout << annee << " n'est pas une annee bissextile." << endl;
    }

    return 0;
}

// Règle pour qu'une année soit bissextile :

// Elle est divisible par 4

// Elle n'est pas bissextile si elle est divisible par 4 et par 100

// Mais elle est bissextile si elle est aussi divisible par 400