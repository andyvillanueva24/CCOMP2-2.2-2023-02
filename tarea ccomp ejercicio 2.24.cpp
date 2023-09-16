//Ejercicio 2.24

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    if (numero1 % 2 != 0) {
        cout << "El primer número es impar." << endl;
    } else {
        cout << "El primer número no es impar." << endl;
    }

    if (numero2 % 2 != 0) {
        cout << "El segundo número es impar." << endl;
    } else {
        cout << "El segundo número no es impar." << endl;
    }

    if ((numero1 + numero2) % 2 != 0) {
        cout << "La suma de los dos números es impar." << endl;
    } else {
        cout << "La suma de los dos números no es impar." << endl;
    }

    return 0;
}