//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Tableau statique avec 5 fruits
    string fruit[5] = {"Pomme", "Banane", "Cerise", "Mangue", "Kiwi"};

    // 2. Affichage du tableau fruit
    cout << "Liste des fruits disponibles :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << fruit[i] << endl;
    }

    // 3. Demande du nombre de fruits favoris
    int n;
    cout << "\nCombien de fruits favoris voulez-vous saisir ? ";
    cin >> n;

    // 4. Création dynamique du tableau favoris
    string* favoris = new string[n];

    // 5. Saisie des fruits favoris
    cout << "Entrez vos fruits favoris :" << endl;
    // Vider le buffer après cin >> n pour éviter problème avec getline
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Fruit favori #" << i + 1 << " : ";
        getline(cin, favoris[i]);
    }

    // 6. Affichage des fruits favoris
    cout << "\nVos fruits favoris sont :" << endl;
    for (int i = 0; i < n; i++) {
        cout << favoris[i] << endl;
    }

    // 7. Libération de la mémoire
    delete[] favoris;

    return 0;
}
