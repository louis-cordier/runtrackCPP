#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien chien1;
    Chien chien2;
    Chat chat1;
    Chat chat2;
    Chat chat3;

    std::cout << "Nombre total d'animaux crees : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
