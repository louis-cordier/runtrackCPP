//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n, m, temp;

    // Saisie des deux entiers
    cout << "Entrez la valeur de n : ";
    cin >> n;

    cout << "Entrez la valeur de m : ";
    cin >> m;

    // Affichage avant l'echange
    cout << "Avant l'echange : n = " << n << ", m = " << m << endl;

    // Échange des valeurs
    temp = n;
    n = m;
    m = temp;

    // Affichage après l'échange
    cout << "Apres l'echange : n = " << n << ", m = " << m << endl;

    return 0;
}
