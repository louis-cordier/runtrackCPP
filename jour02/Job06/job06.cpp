//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Entrez un entier positif : ";
    cin >> n;

    if (n <= 0) {
        cout << "Erreur : veuillez entrer un entier positif superieur à 0." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " est un multiple de 3 et de 5" << endl;
        else if (i % 3 == 0)
            cout << i << " est un multiple de 3" << endl;
        else if (i % 5 == 0)
            cout << i << " est un multiple de 5" << endl;
    }

    return 0;
}
