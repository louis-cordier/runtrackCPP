//
// Created by louis on 16/05/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Note {
    string nom;
    string prenom;
    double note;
};

void ajouterNote(vector<Note>& notes) {
    Note n;
    cout << "Nom : "; cin >> n.nom;
    cout << "Prenom : "; cin >> n.prenom;
    cout << "Note : "; cin >> n.note;
    notes.push_back(n);
    cout << "Note ajoutee avec succès !" << endl;
}

void afficherNotes(const vector<Note>& notes) {
    if (notes.empty()) {
        cout << "La liste est vide." << endl;
        return;
    }
    cout << "Liste des notes :" << endl;
    for (const auto& n : notes) {
        cout << n.nom << " " << n.prenom << " : " << n.note << endl;
    }
}

void supprimerNote(vector<Note>& notes) {
    string nom, prenom;
    cout << "Nom de l'etudiant a supprimer : "; cin >> nom;
    cout << "Prenom de l'etudiant a supprimer : "; cin >> prenom;

    auto it = find_if(notes.begin(), notes.end(), [&](const Note& n) {
        return n.nom == nom && n.prenom == prenom;
    });

    if (it != notes.end()) {
        notes.erase(it);
        cout << "Note supprimee." << endl;
    } else {
        cout << "Etudiant non trouvé." << endl;
    }
}

void afficherMoyenne(const vector<Note>& notes) {
    if (notes.empty()) {
        cout << "Aucune note disponible pour calculer la moyenne." << endl;
        return;
    }

    double somme = 0;
    for (const auto& n : notes) {
        somme += n.note;
    }
    cout << "Moyenne des notes : " << somme / notes.size() << endl;
}

int main() {
    vector<Note> notes;
    int choix;

    do {
        cout << "\nMenu :\n"
             << "1. Ajouter une note\n"
             << "2. Afficher la liste des notes\n"
             << "3. Supprimer une note d'un etudiant\n"
             << "4. Afficher la moyenne des notes\n"
             << "5. Quitter\n"
             << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(notes);
                break;
            case 2:
                afficherNotes(notes);
                break;
            case 3:
                supprimerNote(notes);
                break;
            case 4:
                afficherMoyenne(notes);
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide, veuillez reessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}
