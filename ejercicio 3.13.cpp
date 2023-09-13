//Ejercicio 3.13:
#include <iostream>
#include <string>
#include "Cuenta.h"

class Cuenta {
public:
    Cuenta(const std::string& nombre, double saldoInicial)
        : nombreCuenta(nombre) {
        if (saldoInicial >= 0.0) {
            saldo = saldoInicial;
        }
    }

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
        std::cout << "Nombre de la cuenta: " << nombreCuenta << "\nSaldo: $" << saldo << std::endl;
    }

private:
    std::string nombreCuenta;
    double saldo = 0.0;
};

int main() {
    Cuenta cuenta1("Nombre1", 1000.0);
    Cuenta cuenta2("Nombre2", 2000.0);

    cuenta1.displayAccount();
    cuenta2.displayAccount();

    std::cout << "\nDepositar $500 en cuenta1 y $1000 en cuenta2...\n\n";
    
    cuenta1.depositar(500.0);
    cuenta2.depositar(1000.0);

    cuenta1.displayAccount();
    cuenta2.displayAccount();

    std::cout << "\nRetirar $200 de cuenta1 y $500 de cuenta2...\n\n";
    
    cuenta1.retirar(200.0);
    cuenta2.retirar(500.0);

    cuenta1.displayAccount();
    cuenta2.displayAccount();

    return 0;
}
