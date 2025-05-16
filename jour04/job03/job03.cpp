//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <cstring>  // Pour strlen
using namespace std;

int main() {
    char str[100];  // Tableau de caractères pour stocker la chaîne

    // Demander une chaîne à l'utilisateur
    cout << "Entrez une chaine de caracteres : ";
    cin >> str;  // Attention : s'arrête à l'espace

    // Déclaration des pointeurs
    char* p1 = str;                      // Début de la chaîne
    char* p2 = str + strlen(str) - 1;    // Fin de la chaîne

    // Inversion de la chaîne à l'aide des pointeurs
    while (p1 < p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }

    // Affichage de la chaîne inversée
    cout << "Chaine inversee : " << str << endl;

    return 0;
}
