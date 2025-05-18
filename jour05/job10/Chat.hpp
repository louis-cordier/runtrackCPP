#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Chat : public Animal {
public:
    Chat() : Animal() {}

    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Redéfinition obligatoire (sans paramètre)
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }

    // Nouvelle méthode surchargée avec paramètre
    void manger(const std::string& nourriture) const {
        if (nourriture == "des croquettes") {
            std::cout << "Le chat mange des croquettes." << std::endl;
        } else {
            std::cout << "Le chat mange " << nourriture << "." << std::endl;
        }
    }
};

#endif // CHAT_HPP
