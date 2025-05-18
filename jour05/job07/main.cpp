#include <iostream>
#include "Contact.hpp"

int main() {
    // Création d'objets Contact
    Contact c1("Alice", 123456789);
    Contact c2("Bob", 987654321);
    Contact c3("Charlie", 555555555);

    // Affichage originaux
    std::cout << "Contacts originaux :" << std::endl;
    c1.afficher();
    c2.afficher();
    c3.afficher();

    // Copies des objets
    Contact c1_copy(c1);
    Contact c2_copy(c2);
    Contact c3_copy(c3);

    // Modification des numéros sur les copies
    c1_copy.setNumero(111111111);
    c2_copy.setNumero(222222222);
    c3_copy.setNumero(333333333);

    // Affichage des copies modifiées
    std::cout << "\nCopies modifiees :" << std::endl;
    c1_copy.afficher();
    c2_copy.afficher();
    c3_copy.afficher();

    // Affichage des originaux à nouveau pour vérifier qu'ils n'ont pas changé
    std::cout << "\nContacts originaux apres modification des copies :" << std::endl;
    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
