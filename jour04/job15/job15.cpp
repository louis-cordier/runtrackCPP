//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int tableau[] = {1, 2, 3, 4, 5}; // Déclaration du tableau

    cout << "Contenu du tableau :" << endl;

    // Boucle utilisant des références pour parcourir les éléments
    for (int& valeur : tableau) {
        cout << valeur << " ";
    }

    cout << endl;

    return 0;
}
