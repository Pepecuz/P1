// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  48
// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.

#include <iostream>
using namespace std;
//Ingresamos un rango entre a y b
int main() {
    int A, B;
    int cantidadPares = 0;

    cout << "Ingrese el valor de A: ";
    cin >> A;

    cout << "Ingrese el valor de B: ";
    cin >> B;

    // Asegurarse de que A sea menor o igual a B
    if (A > B) {
        cout << "El valor de A debe ser menor o igual a B." << endl;
        return 1; // Salir del programa con código de error
    }

    for (int num = A; num <= B; num++) {
        if (num % 2 == 0) { // Si el número es par
            cantidadPares++;
        }
    }

    cout << "La cantidad de números pares en el rango [" << A << ", " << B << "] es: " << cantidadPares << endl;

    return 0;
}
