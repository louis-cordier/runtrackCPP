#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"
#include <iostream>

class Chat : public Animal {
public:
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif // CHAT_HPP
