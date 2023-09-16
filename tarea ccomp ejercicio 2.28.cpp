//Ejercicio 2.28:

#include <iostream>
using namespace std;

int main() {
    int numero, digito1, digito2, digito3, digito4;

    cout << "Ingrese un número entero de cuatro dígitos: ";
    cin >> numero;

    
    digito4 = numero % 10;       
    numero /= 10;                
    digito3 = numero % 10;       
    numero /= 10;               
    digito2 = numero % 10;       
    numero /= 10;                
    digito1 = numero % 10;       

    cout << digito4 << "  " << digito3 << "  " << digito2 << "  " << digito1 << endl;

    return 0;
}