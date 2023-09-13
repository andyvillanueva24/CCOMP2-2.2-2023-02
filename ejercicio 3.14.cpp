//Ejercicio 3.14:
#include <iostream>
#include <string>
#include "Cuenta.h"
class Cuenta {
public:
    Cuenta(unsigned int numCuenta, const std::string& nombre, const std::string& apellido, double saldoInicial)
        : numeroCuenta(numCuenta), nombreTitular(nombre), apellidoTitular(apellido), saldo(saldoInicial) {}

    void depositar(double monto) {
        if (monto > 0.0) {
            saldo += monto;
        }
    }

    void retirar(double monto) {
        if (monto > 0.0 && saldo >= monto) {
            saldo -= monto;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }

    void displayAccount() const {
        std::cout << "Número de cuenta: " << numeroCuenta << "\nNombre del titular: " << nombreTitular << " " << apellidoTitular << "\nSaldo: $" << saldo << std::endl;
    }

private:
    unsigned int numeroCuenta;
    std::string nombreTitular;
    std::string apellidoTitular;
    double saldo = 0.0;
};

int main() {
    // Crear un nuevo objeto de la clase Cuenta utilizando inicialización de lista:
    Cuenta cuentaNuevo(12345u, "Andy", "Villanueva", 1000.0);

    cuentaNuevo.displayAccount();

    return 0;
}