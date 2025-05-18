#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <iostream>

class Operation {
private:
    double valeur;

public:
    // Constructeur
    Operation(double v = 0.0) : valeur(v) {}

    // Getter
    double getValeur() const {
        return valeur;
    }

    // Surcharge opérateurs mathématiques
    Operation operator+(const Operation& autre) const {
        return Operation(valeur + autre.valeur);
    }

    Operation operator-(const Operation& autre) const {
        return Operation(valeur - autre.valeur);
    }

    Operation operator*(const Operation& autre) const {
        return Operation(valeur * autre.valeur);
    }

    Operation operator/(const Operation& autre) const {
        if (autre.valeur == 0) {
            std::cerr << "Erreur : division par zero !" << std::endl;
            return Operation(0); // ou gérer autrement l'erreur
        }
        return Operation(valeur / autre.valeur);
    }

    // Surcharge opérateur d'affichage
    friend std::ostream& operator<<(std::ostream& os, const Operation& op) {
        os << op.valeur;
        return os;
    }
};

#endif // OPERATION_HPP
