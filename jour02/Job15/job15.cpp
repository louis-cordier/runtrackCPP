//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int limite;
    cout << "Entrez la limite superieure pour la suite de Fibonacci : ";
    cin >> limite;

    if (limite < 0) {
        cout << "Erreur : veuillez entrer une limite positive." << endl;
        return 1;
    }

    int a = 0, b = 1;

    cout << "Suite de Fibonacci jusqu'a " << limite << " : ";

    // Affiche les termes de la suite <= limite
    while (a <= limite) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }

    cout << endl;
    return 0;
}
