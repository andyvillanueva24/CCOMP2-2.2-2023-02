//Ejercicio 2.20::

#include <iostream>
using namespace std;

int main() {
  
    const double PI = 3.14159;

    int radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    int diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    cout << "Diámetro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Área: " << area << endl;

    return 0;
}