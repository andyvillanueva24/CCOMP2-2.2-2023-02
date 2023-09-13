//Ejercicio 3.12:
#include <iostream>
#include "Fecha.h"
class Fecha {
public:
    Fecha(int mes, int dia, int año)
        : mes(mes), dia(dia), año(año) {
        
        if (mes < 1 || mes > 12) {
            this->mes = 1; 
        }
    }

    
    void setMes(int mes) {
        if (mes >= 1 && mes <= 12) {
            this->mes = mes;
        }
    }

    int getMes() const {
        return mes;
    }

    void setDia(int dia) {
        this->dia = dia;
    }

    int getDia() const {
        return dia;
    }

    void setAño(int anio) {
        this->año = anio;
    }

    int getAño() const {
        return año;
    }

    
    void displayDate() const {
        std::cout << mes << "/" << dia << "/" << año << std::endl;
    }

private:
    int mes;
    int dia;
    int año;
};

int main() {
    Fecha fecha(9, 12, 2023); 

    std::cout << "Fecha: ";
    fecha.displayDate();
    
    fecha.setMes(5);
    
    fecha.setAño(2024);
    
    std::cout << "Fecha actualizada: ";
    fecha.displayDate();

    return 0;
}