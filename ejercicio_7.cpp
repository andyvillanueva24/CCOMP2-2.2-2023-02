#include <iostream>

using namespace std;
int es_primo(int numero) {
    if (numero <= 1) return false;
    if (numero <= 3) return true;
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    
    for (int i = 5; i * i <= numero; i += 6) {
       if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    
    return true;
}

int encontrar_primo_numero(int n) {
    int contador = 0;
    int numero = 2;

    while (true) {
        if (es_primo(numero)) {
            contador++;
            if (contador == n) return numero;
        }
        numero++;
    }
}

int main() {
    int n = 10001;
    int primo_10001 = encontrar_primo_numero(n);

    cout << "El numero primo " << n << " es: " << primo_10001 <<endl;

    return 0;
}
