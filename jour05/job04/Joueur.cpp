#include "Joueur.hpp"

// Constructeurs
Joueur::Joueur() : x(0), y(0), nom("Inconnu") {}

Joueur::Joueur(int x_init, int y_init) : x(x_init), y(y_init), nom("Inconnu") {}

Joueur::Joueur(int x_init, int y_init, const std::string& nom_init)
    : x(x_init), y(y_init), nom(nom_init) {}

// Méthode d'affichage
void Joueur::afficherPosition() const {
    std::cout << "Joueur '" << nom << "' est en position : (" << x << ", " << y << ")" << std::endl;
}

// Déplacement
void Joueur::deplacer(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

// Getters
int Joueur::getX() const {
    return this->x;
}

int Joueur::getY() const {
    return this->y;
}

std::string Joueur::getNom() const {
    return this->nom;
}

// Setters
void Joueur::setX(int x) {
    this->x = x;
}

void Joueur::setY(int y) {
    this->y = y;
}

void Joueur::setNom(const std::string& nom) {
    this->nom = nom;
}
