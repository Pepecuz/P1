// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  66
// Problema planteado: Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que
//permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
//cantidad de billetes y monedas a convertir.

#include <iostream>
using namespace std;

int main() {
    float cantidad;
    cout << "Ingrese la cantidad de dinero: $";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que cero." << endl;
        return 1;
    }

    int billetes[] = {100, 50, 20, 10, 5, 2, 1};
    int monedas[] = {50, 25, 10, 5, 1};

    cout << "Billetes y monedas a entregar:" << endl;

    // Procesar billetes
    for (int i = 0; i < sizeof(billetes) / sizeof(billetes[0]); ++i) {
        int cantidadBilletes = cantidad / billetes[i];
        cantidad -= cantidadBilletes * billetes[i];
        if (cantidadBilletes > 0) {
            cout << cantidadBilletes << " billete(s) de $" << billetes[i] << endl;
        }
    }

    // Procesar monedas
    cantidad *= 100; // Convertir a centavos para trabajar con enteros
    for (int i = 0; i < sizeof(monedas) / sizeof(monedas[0]); ++i) {
        int cantidadMonedas = cantidad / monedas[i];
        cantidad -= cantidadMonedas * monedas[i];
        if (cantidadMonedas > 0) {
            cout << cantidadMonedas << " moneda(s) de " << monedas[i] << " centavos" << endl;
        }
    }

    return 0;
}

