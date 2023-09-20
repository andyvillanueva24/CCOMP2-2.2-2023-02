#include <iostream>
using namespace std;

int es_palindromo(int numero) {
    int original = numero;
    int reverso = 0;
    
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }
    
    return original == reverso;
}

int main() {
    int palindromo_mas_grande = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;
            if (es_palindromo(producto) && producto > palindromo_mas_grande) {
                palindromo_mas_grande = producto;
            }
        }
    }

    cout << "El palindromo mas grande formado por el producto de dos numeros de 3 digitos es: " << palindromo_mas_grande <<endl;

    return 0;
}
