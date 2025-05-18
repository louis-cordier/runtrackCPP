#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"
#include <iostream>

class Chien : public Animal {
public:
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chien a une alimentation variee." << std::endl;
    }
};

#endif // CHIEN_HPP

