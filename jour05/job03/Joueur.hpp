#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    // Constructeur par défaut
    Joueur();

    // Constructeur avec x et y
    Joueur(int x_init, int y_init);

    // Constructeur avec x, y et nom
    Joueur(int x_init, int y_init, const std::string& nom_init);

    // Méthode pour afficher la position du joueur
    void afficherPosition() const;

    // Méthode pour déplacer le joueur
    void deplacer(int dx, int dy);
};

#endif // JOUEUR_HPP
