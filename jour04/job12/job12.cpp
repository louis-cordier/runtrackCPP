//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure pour le staff
struct Staff {
    string nom;
    string prenom;
};

// Structure pour les étudiants
struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    // Initialisation du staff avec deux membres
    Staff staff1 = {"Cordial", "Alicia"};
    Staff staff2 = {"Malardier", "Pierre"};

    // Affichage des prénoms du staff
    cout << "Prenoms du staff :" << endl;
    cout << staff1.prenom << endl;
    cout << staff2.prenom << endl;

    // Saisie des étudiants
    int nombreEtudiants;
    cout << "\nCombien d'etudiants voulez-vous saisir ? ";
    cin >> nombreEtudiants;
    cin.ignore(); // Vider le buffer après cin

    vector<Etudiant> etudiants(nombreEtudiants);

    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << "\nEtudiant #" << i + 1 << endl;
        cout << "Nom : ";
        getline(cin, etudiants[i].nom);
        cout << "Prenom : ";
        getline(cin, etudiants[i].prenom);
    }

    // Affichage des prénoms des étudiants
    cout << "\nPrenoms des etudiants :" << endl;
    for (const auto& etu : etudiants) {
        cout << etu.prenom << endl;
    }

    return 0;
}
