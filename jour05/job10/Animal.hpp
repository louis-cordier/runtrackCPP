#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
private:
    // Compteur statique pour le nombre total d'animaux créés
    static int totalAnimaux;

public:
    // Constructeur : incrémente le compteur
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() = default;

    // Méthodes virtuelles pures (classe abstraite)
    virtual void crier() const = 0;
    virtual void manger() const = 0;

    // Méthode statique pour récupérer le total d'animaux créés
    static int getTotalAnimaux() {
        return totalAnimaux;
    }
};

// Initialisation du membre statique
int Animal::totalAnimaux = 0;

#endif // ANIMAL_HPP
