//
// Created by louis on 14/05/2025.
//
#include <iostream>
#include <iomanip>  // pour setprecision
using namespace std;

int main() {
    int n;
    double somme = 0.0;

    cout << "Entrez un entier n > 0 : ";
    cin >> n;

    if (n <= 0) {
        cout << "Erreur : veuillez entrer un entier strictement positif." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }

    cout << fixed << setprecision(10); // Affiche avec 10 décimales
    cout << "Somme des " << n << " premiers termes de la serie harmonique : " << somme << endl;

    return 0;
}
