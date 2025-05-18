#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
private:
    // Compteur statique commun à tous les animaux
    static int totalAnimaux;

public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() = default;

    virtual void crier() const = 0;
    virtual void manger() const = 0;

    // Getter statique pour le total d'animaux
    static int getTotalAnimaux() {
        return totalAnimaux;
    }
};

// Initialisation du membre statique (obligatoire en C++)
int Animal::totalAnimaux = 0;

#endif // ANIMAL_HPP
