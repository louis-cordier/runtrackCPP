#include <iostream>
using namespace std;

int main() {
    char c = '\x01';        // Valeur : 1 (car '\x01' = 1 en hexadécimal)
    short int p = 10;       // Valeur : 10

    // Expression 1 : p + 3 → short + int → promotion à int
    int x = p + 3;          // x = 10 + 3 = 13
    cout << "x = " << x << endl;

    // Expression 2 : c + 1 → char + int → promotion à int
    int y = c + 1;          // y = 1 + 1 = 2
    cout << "y = " << y << endl;

    // Expression 3 : p + c → short + char → promotion à int
    int z = p + c;          // z = 10 + 1 = 11
    cout << "z = " << z << endl;

    // Expression 4 : 3 * p + 5 * c → tout est promu en int
    int w = 3 * p + 5 * c;  // w = 3*10 + 5*1 = 30 + 5 = 35
    cout << "w = " << w << endl;

    return 0;
}
