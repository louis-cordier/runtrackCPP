#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chat monChat;

    monChat.crier();
    monChat.manger();                    // version sans paramètre
    monChat.manger("des croquettes");   // version avec paramètre
    monChat.manger("du poulet");         // autre nourriture

    return 0;
}
