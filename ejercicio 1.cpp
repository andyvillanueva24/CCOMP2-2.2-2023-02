#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    cout << "Ingrese un numero n: ";
    cin >> n;
    cout << "Los primeros primos de " << n << " son:" << endl;
    
    for (int numero = 2; numero <= n; numero++) {
        if (esPrimo(numero)) {
            cout << numero << " ";
        }
    }

    
    return 0;
}
