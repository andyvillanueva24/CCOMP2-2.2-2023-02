//Ejercicio 2.23:

#include <iostream>
using namespace std;

int main() {
  
    int numero;
    int numero_maximo;
    int numero_minimo;  

    cout << "Ingrese el primer número entero: ";
    cin >> numero;
  
    numero_maximo = numero;
    numero_minimo = numero;

    for (int i = 1; i < 5; i++) {
        cout << "Ingrese el siguiente número entero: ";
        cin >> numero;

        if (numero > numero_maximo) {
            numero_maximo = numero;
        }

        if (numero < numero_minimo) {
            numero_minimo = numero;
        }
    }

    cout << "El número más grande es: " << numero_maximo << endl;
    cout << "El número más pequeño es: " << numero_minimo << endl;

    return 0;
}