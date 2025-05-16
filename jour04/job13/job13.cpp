//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <vector>
#include <string>
#include <limits> // Pour vider les erreurs cin

using namespace std;

// Structure Vol
struct Vol {
    string destination;
    float tempsDeVol; // en heures
};

int main() {
    vector<Vol*> vols;
    int nombreVols;

    cout << "Combien de destinations voulez-vous saisir ? ";
    cin >> nombreVols;
    cin.ignore(); // Nettoyer le buffer

    for (int i = 0; i < nombreVols; ++i) {
        Vol* v = new Vol;

        cout << "\nDestination #" << i + 1 << endl;
        cout << "Nom de la destination : ";
        getline(cin, v->destination);

        // Lecture sécurisée du temps de vol
        cout << "Temps de vol depuis Marseille (en heures, ex: 1.5) : ";
        while (!(cin >> v->tempsDeVol)) {
            cout << "⚠️  Entree invalide. Entrez un nombre (ex: 1.5) : ";
            cin.clear(); // Réinitialiser cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Vider ligne
        }
        cin.ignore(); // Nettoyer le buffer

        vols.push_back(v);
    }

    // Affichage et modification
    cout << "\n--- Donnees des vols ---" << endl;
    for (size_t i = 0; i < vols.size(); ++i) {
        cout << "Vol #" << i + 1 << " vers " << vols[i]->destination
             << " - Temps de vol : " << vols[i]->tempsDeVol << " h" << endl;

        vols[i]->tempsDeVol += 0.5;
        cout << "=> Temps de vol apres modification : "
             << vols[i]->tempsDeVol << " h" << endl;
    }

    // Libérer la mémoire
    for (Vol* v : vols) {
        delete v;
    }

    return 0;
}
