//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b : ";
    cin >> b;

    if (a <= b) {
        // Affiche de a à b croissant
        for (int i = a; i <= b; i++) {
            cout << i << " ";
        }
    } else {
        // Affiche de a à b décroissant
        for (int i = a; i >= b; i--) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
