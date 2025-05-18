#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <iostream>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    // Constructeur avec liste d'initialisation
    Etudiant(const std::string& nom_init, const std::string& prenom_init, int age_init, int matricule_init)
        : nom(nom_init), prenom(prenom_init), age(age_init), matricule(matricule_init) {}

    // Méthode pour afficher les informations de l'étudiant
    void afficherInfos() const {
        std::cout << "Nom       : " << nom << std::endl;
        std::cout << "Prenom    : " << prenom << std::endl;
        std::cout << "Age       : " << age << std::endl;
        std::cout << "Matricule : " << matricule << std::endl;
    }
};

#endif // ETUDIANT_HPP
