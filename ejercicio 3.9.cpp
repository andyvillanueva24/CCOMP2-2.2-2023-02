//Ejercicio 3.9:

#include <iostream>
#include <string>
#include "Cuenta.h"

using namespace std;

class Cuenta {
public:
    Cuenta(const string& nombre, double saldoInicial)
        : titular(nombre), saldo(saldoInicial) {}

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "El monto del retiro excedió el saldo de la cuenta." << endl;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }

private:
    string titular;
    double saldo;
};

int main() {
    Cuenta miCuenta("Nombre", 100.0);

    cout << "Saldo inicial: " << miCuenta.obtenerSaldo() << endl;

    miCuenta.depositar(1500);
    miCuenta.retirar(200);
    miCuenta.retirar(1500);

    cout << "Saldo final: " << miCuenta.obtenerSaldo() << endl;

    return 0;
}