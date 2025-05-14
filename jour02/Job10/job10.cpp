//
// Created by louis on 14/05/2025.
//
#include <iostream>
#include <cmath>  // pour sqrt
using namespace std;

int main() {
    double x;

    do {
        cout << "donnez un nombre positif : ";
        cin >> x;

        if (x < 0) {
            cout << "svp positif" << endl;
        } else if (x > 0) {
            cout << "sa racine carree est : " << sqrt(x) << endl;
        }

        // Si x == 0, le programme s'arrête sans rien afficher de plus
    } while (x != 0);

    return 0;
}
