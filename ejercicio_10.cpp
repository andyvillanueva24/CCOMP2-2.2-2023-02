#include <iostream>

using namespace std;

int es_primo(int numero) {
    if (numero <= 1) return 0;
    if (numero <= 3) return 1;
    if (numero % 2 == 0 || numero % 3 == 0) return 0;

    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return 0;
    }

    return 1;
}

long long suma_de_primos_menores_de_n(int n) {
    long long suma = 0;

    for (int i = 2; i < n; i++) {
        if (es_primo(i)) {
            suma += i;
        }
    }

    return suma;
}

int main() {
    int limite = 2000000;
    long long suma_primos = suma_de_primos_menores_de_n(limite);

    cout << "La suma de todos los números primos menores de " << limite << " es: " << suma_primos <<endl;

    return 0;
}
