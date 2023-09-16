//Ejercicio 2.32:

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    double mhr1 = 220 - edad;
    double mhr2 = 208 - 0.7 * edad;
    double mhr3 = 207 - 0.7 * edad;
    double mhr4 = 211 - 0.64 * edad;

    cout << "Valores de la frecuencia cardíaca máxima (MHR) sugeridos:" << endl;
    cout << "MHR (220 - edad): " << mhr1 << " latidos por minuto" << endl;
    cout << "MHR (208 - 0.7 * edad): " << mhr2 << " latidos por minuto" << endl;
    cout << "MHR (207 - 0.7 * edad): " << mhr3 << " latidos por minuto" << endl;
    cout << "MHR (211 - 0.64 * edad): " << mhr4 << " latidos por minuto" << endl;

    double minMHR = min(min(mhr1, mhr2), min(mhr3, mhr4));
    double maxMHR = max(max(mhr1, mhr2), max(mhr3, mhr4));

    cout << "Sugerencia: Considere un rango de valores entre " << minMHR << " y " << maxMHR << " latidos por minuto." << endl;

    return 0;
}