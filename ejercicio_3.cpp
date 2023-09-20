#include <iostream>
using namespace std;
int main() {
    long long numero_grande = 600851475143;
    long long mayor_factor_primo = 2;

    while (numero_grande > 1) {
        if (numero_grande % mayor_factor_primo == 0) {
            numero_grande /= mayor_factor_primo;
        } else {
            mayor_factor_primo++;
        }
    }

    cout << "El mayor factor primo de 600851475143 es: " << mayor_factor_primo <<endl;

    return 0;
}