#include "Joueur.hpp"

// Constructeur par défaut
Joueur::Joueur() : x(0), y(0), nom("Inconnu") {}

// Constructeur avec x et y
Joueur::Joueur(int x_init, int y_init) : x(x_init), y(y_init), nom("Inconnu") {}

// Constructeur avec x, y et nom
Joueur::Joueur(int x_init, int y_init, const std::string& nom_init)
    : x(x_init), y(y_init), nom(nom_init) {}

void Joueur::afficherPosition() const {
    std::cout << "Joueur '" << nom << "' est en position : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
