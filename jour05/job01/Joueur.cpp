#include "Joueur.hpp"

Joueur::Joueur(int x_init, int y_init) : x(x_init), y(y_init) {}

void Joueur::afficherPosition() const {
    std::cout << "Position du joueur: (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
