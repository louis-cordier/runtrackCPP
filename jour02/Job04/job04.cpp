//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operateur;

    cout << "=== Calculatrice simple ===" << endl;
    cout << "Entrez une expression (ex : 4 + 5) : ";
    cin >> a >> operateur >> b;

    switch (operateur) {
        case '+':
            cout << "Resultat : " << a + b << endl;
            break;
        case '-':
            cout << "Resultat : " << a - b << endl;
            break;
        case '*':
            cout << "Resultat : " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Resultat : " << a / b << endl;
            else
                cout << "Erreur : division par zero !" << endl;
            break;
        default:
            cout << "Erreur : operateur inconnu !" << endl;
    }

    return 0;
}
