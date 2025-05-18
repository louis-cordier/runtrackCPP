#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur principal
    Contact(const std::string& nom_init, int numero_init)
        : nom(nom_init), numero(numero_init) {}

    // Constructeur de copie
    Contact(const Contact& autre)
        : nom(autre.nom), numero(autre.numero) {}

    // Getter nom
    std::string getNom() const { return nom; }

    // Getter numéro
    int getNumero() const { return numero; }

    // Setter numéro
    void setNumero(int nouveauNumero) { numero = nouveauNumero; }

    // Affichage des infos
    void afficher() const {
        std::cout << "Nom : " << nom << ", Numero : " << numero << std::endl;
    }
};

#endif // CONTACT_HPP
