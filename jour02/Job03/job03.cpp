//
// Created by louis on 14/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int i, n, som;

    // Version avec WHILE
    som = 0;
    i = 0;
    cout << "=== Version avec while ===" << endl;
    while (i < 4) {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme (while) : " << som << endl;

    // Version avec DO...WHILE
    som = 0;
    i = 0;
    cout << "\n=== Version avec do...while ===" << endl;
    do {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);
    cout << "Somme (do...while) : " << som << endl;

    return 0;
}
