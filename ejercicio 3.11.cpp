//Ejercicio 3.11:
#include <iostream>
#include <string>
#include "MotorVehicle.h"
class MotorVehicle {
public:
    MotorVehicle(const std::string& marca, const std::string& tipoCombustible, int anioFabricacion, const std::string& color, int capacidadMotor)
        : marca(marca), tipoCombustible(tipoCombustible), anioFabricacion(anioFabricacion), color(color), capacidadMotor(capacidadMotor) {}

   
    void setMarca(const std::string& marca) {
        this->marca = marca;
    }

    std::string getMarca() const {
        return marca;
    }

    void setTipoCombustible(const std::string& tipoCombustible) {
        this->tipoCombustible = tipoCombustible;
    }

    std::string getTipoCombustible() const {
        return tipoCombustible;
    }

    void setAnioFabricacion(int anioFabricacion) {
        this->anioFabricacion = anioFabricacion;
    }

    int getAnioFabricacion() const {
        return anioFabricacion;
    }

    void setColor(const std::string& color) {
        this->color = color;
    }

    std::string getColor() const {
        return color;
    }

    void setCapacidadMotor(int capacidadMotor) {
        this->capacidadMotor = capacidadMotor;
    }

    int getCapacidadMotor() const {
        return capacidadMotor;
    }

    
    void displayCarDetails() const {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Tipo de Combustible: " << tipoCombustible << std::endl;
        std::cout << "Año de Fabricación: " << anioFabricacion << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Capacidad del Motor: " << capacidadMotor << " cc" << std::endl;
    }

private:
    std::string marca;
    std::string tipoCombustible;
    int anioFabricacion;
    std::string color;
    int capacidadMotor;
};

int main() {
    MotorVehicle vehiculo("Toyota", "Gasolina", 2022, "Rojo", 2000);

    
    std::cout << "Detalles del Vehículo:" << std::endl;
    vehiculo.displayCarDetails();

    return 0;
}