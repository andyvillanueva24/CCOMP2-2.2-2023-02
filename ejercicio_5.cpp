#include <iostream>
using namespace std;

long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long calcularMCMDe1aN(int n) {
    long long mcm = 1;
    for (int i = 2; i <= n; i++) {
        mcm = (mcm * i) / calcularMCD(mcm, i);
    }
    return mcm;
}

int main() {
    int l = 20;
    long long resultado = calcularMCMDe1aN(l);

    cout << "El numero positivo mas pequeño divisible por todos los numeros del 1 al " << l << " es: " << resultado <<endl;

    return 0;
}
