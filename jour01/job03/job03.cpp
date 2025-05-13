#include <iostream>
using namespace std;

int main() {
    int N;

    // Demander à l'utilisateur combien de fois afficher le message
    cout << "Entrez un nombre (N) : ";
    cin >> N;

    // Tant que N n'est pas égal à 0, afficher le message N fois
    while (N != 0) {
        for (int i = 0; i < N; ++i) {
            cout << "Hello World" << endl;
        }

        // Redemander un nouveau N à l'utilisateur
        cout << "Entrez un autre nombre (0 pour quitter) : ";
        cin >> N;
    }

    cout << "Programme terminé." << endl;
    return 0;
}
//
// Created by louis on 12/05/2025.
//
