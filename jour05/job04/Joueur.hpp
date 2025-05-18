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
    // Constructeurs
    Joueur();
    Joueur(int x_init, int y_init);
    Joueur(int x_init, int y_init, const std::string& nom_init);

    // Méthodes d'affichage et déplacement
    void afficherPosition() const;
    void deplacer(int dx, int dy);

    // Getters
    int getX() const;
    int getY() const;
    std::string getNom() const;

    // Setters
    void setX(int x);
    void setY(int y);
    void setNom(const std::string& nom);
};

#endif // JOUEUR_HPP
