#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    // Constructeur
    Joueur(int x_init = 0, int y_init = 0);

    // Méthode pour afficher la position du joueur
    void afficherPosition() const;

    // Méthode pour déplacer le joueur
    void deplacer(int dx, int dy);
};

#endif // JOUEUR_HPP
