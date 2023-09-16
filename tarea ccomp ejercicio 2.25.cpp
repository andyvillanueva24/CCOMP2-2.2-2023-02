//Ejercicio 2.25:


#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    cout << "Ingrese el tercer número entero: ";
    cin >> numero3;

    if (numero2 % numero1 == 0 && numero2 % numero3 == 0) {
        cout << "Los dos primeros números son factores del segundo." << endl;
    } else {
        cout << "Los dos primeros números no son factores del segundo." << endl;
    }

    return 0;
}