//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int x = 12;          // Étape 1 : variable x initialisée à 12
    int& ref = x;        // Étape 2 : ref est une référence à x

    cout << "Valeur initiale de x : " << x << endl;

    ref = 20;            // Étape 3 : on modifie x via la référence

    cout << "Valeur de x apres modification via la reference : " << x << endl;

    return 0;
}
