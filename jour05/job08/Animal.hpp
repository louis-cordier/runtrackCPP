#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    virtual ~Animal() = default;

    // Méthodes virtuelles pures => classe abstraite
    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

#endif // ANIMAL_HPP
