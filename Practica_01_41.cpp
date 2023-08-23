// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  41
// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en
//función a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
//trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al
//doble de una hora normal, considere además un descuento del 5% a todos los obreros
//para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
//cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la
//prima de manera general.

#include <iostream>
using namespace std;

int main() {
    int numObreros;
    double tarifaHora, horasTrabajadas;
    const double tarifaExtra = 2.0; // Tarifa para horas extras
    const double descuentoPrima = 0.05; // 5% de descuento para la prima

    cout << "Ingrese el número de obreros: ";
    cin >> numObreros;

    double totalPagos = 0.0;
    double totalDescuento = 0.0;

    for (int i = 1; i <= numObreros; i++) {
        cout << "Obrero " << i << endl;

        cout << "Ingrese la tarifa por hora: ";
        cin >> tarifaHora;

        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;

        double pagoNormal = tarifaHora * horasTrabajadas;
        double horasExtras = 0.0;
        double pagoTotal = 0.0;

        if (horasTrabajadas > 40) {
            horasExtras = horasTrabajadas - 40;
            pagoTotal = (40 * tarifaHora) + (horasExtras * tarifaHora * tarifaExtra);
        } else {
            pagoTotal = pagoNormal;
        }

        double descuento = pagoTotal * descuentoPrima;
        double pagoNeto = pagoTotal - descuento;

        totalPagos += pagoNeto;
        totalDescuento += descuento;

        cout << "Pago total: " << pagoTotal << " Bs." << endl;
        cout << "Descuento por prima: " << descuento << " Bs." << endl;
        cout << "Pago neto: " << pagoNeto << " Bs." << endl;
        cout << endl;
    }

    cout << "Pago general a todos los obreros: " << totalPagos << " Bs." << endl;
    cout << "Total retenido por la prima: " << totalDescuento << " Bs." << endl;

    return 0;
}

