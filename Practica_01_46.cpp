// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  46
// Problema planteado: . La empresa “Limbo S.A.”, empresa de seguros tiene contratados a N vendedores. Cada
//uno hace tres ventas a la semana. Su política de pagos es que un vendedor recibe un
//eldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compañía
//desea saber cuánto dinero obtendrá en la semana cada vendedor por concepto de
//comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y sus comisiones

#include <iostream>
using namespace std;

int main() {
    int n;
    double sueldoBase;

    const double comisionPorVenta = 0.10; // 10% de comisión por venta
    const int ventasPorSemana = 3;
//Ingresamos la cantida de vendedores
    cout << "Ingrese la cantidad de vendedores: ";
    cin >> n;

    cout << "Ingrese el sueldo base: ";
    cin >> sueldoBase;

    for (int i = 1; i <= n; i++) {
        cout << "Vendedor " << i << endl;

        double totalComisiones = 0.0;

        for (int venta = 1; venta <= ventasPorSemana; venta++) {
            double ventaTotal;
            cout << "Ingrese el monto de la venta " << venta << " en Bs.: ";
            cin >> ventaTotal;

            double comision = ventaTotal * comisionPorVenta;
            totalComisiones += comision;
        }

        double salarioTotal = sueldoBase + totalComisiones;

        cout << "Total de comisiones por las tres ventas: " << totalComisiones << " Bs." << endl;
        cout << "Salario total de la semana: " << salarioTotal << " Bs." << endl;
        cout << endl;
    }

    return 0;
}


