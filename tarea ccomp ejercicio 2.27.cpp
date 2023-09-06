//Ejercicio 2.27:


#include <iostream>
using namespace std;

int main() {
  
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    int equivalenteEntero = static_cast<int>(caracter);

    cout << "El equivalente entero de '" << caracter << "' es " << equivalenteEntero << endl;

    return 0;
}