#include <iostream>
using namespace std;


bool esPerfecto(int numero) {
    int sumaDivisores = 1; 
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
            if (i != numero / i) {
                sumaDivisores += numero / i;
            }
        }
    }
    
    return sumaDivisores == numero && numero != 1;
}

int main() {
    int n;
    
    cout << "Ingrese un numero n: ";
    cin >> n;
    
    cout << "Los numeros perfectos " << n << " son:" <<endl;
    
    for (int numero = 2; numero < n; numero++) {
        if (esPerfecto(numero)) {
            cout << numero << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
