#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien monChien;
    Chat monChat;

    std::cout << "Chien :" << std::endl;
    monChien.crier();
    monChien.manger();

    std::cout << "\nChat :" << std::endl;
    monChat.crier();
    monChat.manger();

    return 0;
}
