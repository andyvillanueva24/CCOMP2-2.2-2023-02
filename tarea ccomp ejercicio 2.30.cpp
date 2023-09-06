//Ejercicio 2.30:

#include <iostream>
using namespace std;

int main() {
    double peso_en_kilos, altura_en_centimetros;

    cout << "Ingrese su peso en kilos: ";
    cin >> peso_en_kilos;

    cout << "Ingrese su altura en cm: ";
    cin >> altura_en_centimetros;

    double bmi = (peso_en_kilos / (altura_en_centimetros * altura_en_centimetros)) * 703.0;

    cout << "BMI VALUES" << endl;

    if (bmi < 18.5) {
        cout << "Underweight: less than 18.5" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal: between 18.5 and 24.9" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Overweight: between 25 and 29.9" << endl;
    } else {
        cout << "Obese: 30 or greater" << endl;
    }

    return 0;
}