#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"
#include <iostream>

class Chien : public Animal {
public:
    Chien() : Animal() {}  // Appelle le constructeur de Animal

    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif // CHIEN_HPP
