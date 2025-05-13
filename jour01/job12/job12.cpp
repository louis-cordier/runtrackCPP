//
// Created by louis on 13/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int saisie;
    double somme = 0;

    cout << "Entrez 5 entiers :" << endl;

    for (int i = 0; i < 5; ++i) {
        cin >> saisie;
        somme += saisie;
    }

    cout << "La moyenne est : " << (somme / 5) << endl;

    return 0;
}
