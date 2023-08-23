// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  26
// Problema planteado:  En una tienda comercial....

#include <iostream>

int main() {
    int numArticulos; // Número de artículos que la ama de casa va a comprar
    double total = 0.0; // Total a pagar

    std::cout << "Ingrese el número de artículos que va a comprar: ";
    std::cin >> numArticulos;

    for (int i = 0; i < numArticulos; ++i) {
        double precioArticulo, cantidad;

        std::cout << "Ingrese el precio del artículo " << i + 1 << ": ";
        std::cin >> precioArticulo;

        std::cout << "Ingrese la cantidad del artículo " << i + 1 << ": ";
        std::cin >> cantidad;

        double subtotal = precioArticulo * cantidad;
        total += subtotal;
    }

    std::cout << "El total a pagar es: " << total << " unidades monetarias" << std::endl;

    return 0;
}

