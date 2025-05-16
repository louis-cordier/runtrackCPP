//
// Created by louis on 15/05/2025.
//
#include <iostream>
using namespace std;

int main() {
    int number = 2019;       // Déclaration de la variable
    int* ptr = &number;      // Déclaration du pointeur et initialisation avec l'adresse de number

    // Affichage de la valeur via le pointeur
    cout << "La valeur de number est : " << *ptr << endl;

    return 0;
}
