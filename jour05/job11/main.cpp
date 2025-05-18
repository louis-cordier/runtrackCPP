#include <iostream>
#include "Operation.hpp"

int main() {
    Operation op1(10.0);
    Operation op2(5.0);

    Operation resAdd = op1 + op2;
    Operation resSub = op1 - op2;
    Operation resMul = op1 * op2;
    Operation resDiv = op1 / op2;

    std::cout << "Addition : " << resAdd << std::endl;
    std::cout << "Soustraction : " << resSub << std::endl;
    std::cout << "Multiplication : " << resMul << std::endl;
    std::cout << "Division : " << resDiv << std::endl;

    return 0;
}
