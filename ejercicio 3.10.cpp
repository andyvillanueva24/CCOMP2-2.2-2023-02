//Ejercicio 3.10:
#include <iostream>
#include <string>
#include "Factura.h"
class Factura {
private:
    std::string numeroPieza;
    std::string descripcionPieza;
    int cantidad;
    int precioPorArticulo;
    double iva;
    double tasaDescuento;

public:
    Factura(const std::string& numPieza, const std::string& descPieza, int cant, int precio, double iva = 0.20, double descuento = 0.0)
        : numeroPieza(numPieza), descripcionPieza(descPieza), cantidad(cant), precioPorArticulo(precio), iva(iva), tasaDescuento(descuento) {
    }

    
    void setNumeroPieza(const std::string& numPieza) {
        numeroPieza = numPieza;
    }

    std::string getNumeroPieza() const {
        return numeroPieza;
    }

    void setDescripcionPieza(const std::string& descPieza) {
        descripcionPieza = descPieza;
    }

    std::string getDescripcionPieza() const {
        return descripcionPieza;
    }

    void setCantidad(int cant) {
        if (cant > 0) {
            cantidad = cant;
        }
    }

    int getCantidad() const {
        return cantidad;
    }

    void setPrecioPorArticulo(int precio) {
        if (precio > 0) {
            precioPorArticulo = precio;
        }
    }

    int getPrecioPorArticulo() const {
        return precioPorArticulo;
    }

    void setIva(double iva) {
        if (iva >= 0.0 && iva <= 1.0) {
            this->iva = iva;
        }
    }

    double getIva() const {
        return iva;
    }

    void setTasaDescuento(double descuento) {
        if (descuento >= 0.0 && descuento <= 1.0) {
            tasaDescuento = descuento;
        }
    }

    double getTasaDescuento() const {
        return tasaDescuento;
    }

    
    double getInvoiceAmount() const {
        double subtotal = cantidad * precioPorArticulo;
        double descuento = subtotal * tasaDescuento;
        double impuesto = subtotal * iva;
        return subtotal - descuento + impuesto;
    }
};

int main() {
    Factura factura("12345", "Martillo", 5, 1000); 

    std::cout << "Número de pieza: " << factura.getNumeroPieza() << std::endl;
    std::cout << "Descripción de la pieza: " << factura.getDescripcionPieza() << std::endl;
    std::cout << "Cantidad: " << factura.getCantidad() << std::endl;
    std::cout << "Precio por artículo: " << factura.getPrecioPorArticulo() << std::endl;
    std::cout << "IVA: " << factura.getIva() << std::endl;
    std::cout << "Tasa de descuento: " << factura.getTasaDescuento() << std::endl;
    std::cout << "Monto de la factura: " << factura.getInvoiceAmount() << std::endl;

    return 0;
}