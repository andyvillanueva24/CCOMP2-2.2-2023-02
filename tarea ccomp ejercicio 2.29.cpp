//Ejercicio 2.29:

#include <iostream>
using namespace std;

int main() {
    cout << "Face length  Surface area  Volume" << endl;
    cout << "of cube (cm)  of cube (cm^2)  of cube (cm^3)" << endl;

    for (int longitud = 0; longitud <= 4; longitud++) {
        int areaSuperficie = 6 * longitud * longitud;  // Fórmula del área de superficie de un cubo
        int volumen = longitud * longitud * longitud;  // Fórmula del volumen de un cubo

        cout << longitud << "             " << areaSuperficie << "                " << volumen << endl;
    }

    return 0;
}