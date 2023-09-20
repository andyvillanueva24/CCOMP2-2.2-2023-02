#include <iostream>
using namespace std;
int main() {
    int n = 100; 
    int suma_de_cuadrados = 0;
    int cuadrado_de_suma = 0;

    for (int i = 1; i <= n; i++) {
        suma_de_cuadrados += i * i;
    }

    for (int i = 1; i <= n; i++) {
        cuadrado_de_suma += i;
    }
    cuadrado_de_suma *= cuadrado_de_suma;

    int diferencia = cuadrado_de_suma - suma_de_cuadrados;

    cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " números naturales es: " << diferencia <<endl;

    return 0;
}
