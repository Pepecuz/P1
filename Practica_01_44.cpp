// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  44
// Problema planteado: La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al
//precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se
//aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
//calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. 

#include <iostream>
using namespace std;

int main() {
    int n;
    double precio, totalVentas = 0.0, totalIVA = 0.0;
//Ingresamos el numero de productos que vendimos
    cout << "Ingrese el número de productos vendidos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Producto " << i << endl;

        cout << "Ingrese el precio del producto en Bs.: ";
        cin >> precio;

        double montoFinal = precio * 1.13; // Aplicar IVA del 13%

        if (montoFinal > 2500) {
            montoFinal *= 0.95; // Aplicar descuento del 5% si el monto supera 2500 Bs
        }

        totalVentas += montoFinal;
        totalIVA += (precio * 0.13); // Calcular el IVA por separado

        cout << "Monto a pagar por el producto: " << montoFinal << " Bs." << endl;
        cout << endl;
    }

    cout << "Total de ventas del día: " << totalVentas << " Bs." << endl;
    cout << "Pago del IVA al servicio de Impuestos Nacionales: " << totalIVA << " Bs." << endl;

    return 0;
}
