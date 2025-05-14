//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    unsigned long long resultat = 1;

    cout << "Entrez un entier naturel n (0 <= n <= 20) : ";
    cin >> n;

    if (n > 20) {
        cout << "Erreur : Ce programme accepte n jusqu'à 20 pour éviter un dépassement (overflow)." << endl;
        return 1;
    }

    for (unsigned int i = 1; i <= n; ++i) {
        resultat *= i;
    }

    cout << n << "! = " << resultat << endl;

    return 0;
}
