// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  35
// Problema planteado:  Un supermercado decide efectuar una promoción de descuentos por el valor de las
//compras que efectúan sus clientes, esta promoción se basa en las siguientes
//condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ningún descuento
//Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el
//total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>

int main() {
    int n;
    double totalVentas = 0.0;
    double totalVentasConDescuento = 0.0;

    std::cout << "Ingrese el número de clientes: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        double ventasCliente;

        std::cout << "Ingrese el total de ventas del cliente " << i << ": ";
        std::cin >> ventasCliente;

        totalVentas += ventasCliente;

        double descuento = 0.0;

        if (ventasCliente >= 500.0) {
            descuento = ventasCliente * 0.08;
        } else if (ventasCliente >= 100.0) {
            descuento = ventasCliente * 0.05;
        }

        double ventasConDescuento = ventasCliente - descuento;
        totalVentasConDescuento += ventasConDescuento;

        std::cout << "Descuento aplicado al cliente " << i << ": " << descuento << " Bs." << std::endl;
        std::cout << "Total de ventas con descuento para el cliente " << i << ": " << ventasConDescuento << " Bs." << std::endl;
    }

    std::cout << "Total de ventas sin descuento: " << totalVentas << " Bs." << std::endl;
    std::cout << "Total de ventas con descuento: " << totalVentasConDescuento << " Bs." << std::endl;

    return 0;
}

