//
// Created by louis on 16/05/2025.
//
#include <iostream>
using namespace std;

// Étape 1 : Déclaration de la structure
struct Point {
    int x;
    int y;
};

int main() {
    // Étape 2 : Déclarer une variable de type Point
    Point p;

    // Étape 3 : Déclarer un pointeur vers la structure
    Point* ptr = &p;

    // Étape 4 : Modifier les membres via le pointeur
    ptr->x = 10;
    ptr->y = 20;

    // Étape 5 : Afficher les nouvelles valeurs
    cout << "x = " << p.x << ", y = " << p.y << endl;

    return 0;
}
