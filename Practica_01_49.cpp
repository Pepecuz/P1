// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  49
// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
//el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés
//compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear es:
//Cn = C0(1+I)n

#include <iostream>
#include <cmath>
using namespace std;
//Ingresamos el capital la tasa de interes
int main() {
    double C0, I, Cn;
    int N;

    cout << "Ingrese el capital inicial (C0): ";
    cin >> C0;

    cout << "Ingrese la tasa de interés (I): ";
    cin >> I;

    cout << "Ingrese el número de años (N): ";
    cin >> N;

    // Calcular el capital final usando la fórmula del interés compuesto
    Cn = C0 * pow((1 + I), N);

    cout << "Capital inicial (C0): " << C0 << " Bs." << endl;
    cout << "Tasa de interés (I): " << I << endl;
    cout << "Número de años (N): " << N << endl;
    cout << "Capital final (Cn): " << Cn << " Bs." << endl;

    double interesesGanados = Cn - C0;
    cout << "Intereses ganados: " << interesesGanados << " Bs." << endl;

    return 0;
}
