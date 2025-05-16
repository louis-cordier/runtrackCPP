//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int* pa = &a;
    int* pb = &b;

    // Affichage avant échange
    cout << "Avant l'echange : a = " << a << ", b = " << b << endl;

    // Échange des valeurs via pointeurs
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    // Affichage après échange
    cout << "Apres l'echange : a = " << a << ", b = " << b << endl;

    return 0;
}
