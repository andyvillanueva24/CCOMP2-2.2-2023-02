//Ejercicio 2.31:

#include <iostream>
using namespace std;

int main() {
  
    double totalMilesDrivenPerDay, costPerGallonOfGasoline, averageMilesPerGallon, parkingFeesPerDay, tollsPerDay;

    cout << "Ingrese el total de millas conducidas por día: ";
    cin >> totalMilesDrivenPerDay;

    cout << "Ingrese el costo por galón de gasolina: $";
    cin >> costPerGallonOfGasoline;

    cout << "Ingrese el promedio de millas por galón: ";
    cin >> averageMilesPerGallon;

    cout << "Ingrese las tarifas de estacionamiento por día: $";
    cin >> parkingFeesPerDay;

    cout << "Ingrese los peajes por día: $";
    cin >> tollsPerDay;

    double dailyCost = (totalMilesDrivenPerDay / averageMilesPerGallon) * costPerGallonOfGasoline + parkingFeesPerDay + tollsPerDay;

    cout << "El costo diario de conducción al trabajo es de: $" << dailyCost << endl;

    return 0;
}