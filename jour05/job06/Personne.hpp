#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(const std::string& nom_init, int pv_init, float def_init)
        : nom(nom_init), pointsDeVie(pv_init), defense(def_init) {}

    // Méthode pour afficher les infos
    void afficherInfos() const {
        std::cout << "Nom         : " << nom << std::endl;
        std::cout << "Points de vie : " << pointsDeVie << std::endl;
        std::cout << "Defense     : " << defense << std::endl;
    }

    // Getters
    std::string getNom() const { return nom; }
    int getPointsDeVie() const { return pointsDeVie; }
    float getDefense() const { return defense; }

    // Setters
    void setNom(const std::string& nouveauNom) { nom = nouveauNom; }
    void setPointsDeVie(int nouveauxPv) { pointsDeVie = nouveauxPv; }
    void setDefense(float nouvelleDefense) { defense = nouvelleDefense; }

    // Méthode pour modifier les points de vie (exemple : recevoir des dégâts)
    void recevoirDegats(int degats) {
        int degatsReduits = static_cast<int>(degats * (1 - defense));
        pointsDeVie -= degatsReduits;
        if (pointsDeVie < 0) pointsDeVie = 0;
        std::cout << nom << " recoit " << degatsReduits << " points de degats apres defense." << std::endl;
    }
};

#endif // PERSONNE_HPP
