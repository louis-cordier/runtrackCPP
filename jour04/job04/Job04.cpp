//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    // Étape 1 : déclarer les variables
    int a = 10, b = 20, c = 30;

    // Étape 2 : créer les pointeurs
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    // Étape 3 : afficher les valeurs via les pointeurs
    cout << "Valeurs initiales : " << endl;
    cout << "*pa = " << *pa << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pc = " << *pc << endl;

    // Étape 4 : modifier les valeurs via les pointeurs
    *pa = 100;
    *pb = 200;
    *pc = 300;

    // Étape 5 : afficher les nouvelles valeurs des variables
    cout << "\nNouvelles valeurs des variables : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
