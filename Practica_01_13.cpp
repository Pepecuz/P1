// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 13
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese número entero: ";
    cin >> numero;
    //Ingresamos un numero entero
    int cantidadDigitos = 0;
    int numeroTemporal = numero;

    // Contara los digitos que tiene el numero
    while (numeroTemporal != 0) {
        numeroTemporal /= 10;
        cantidadDigitos++;
    }

    cout << "El número " << numero << " tiene " << cantidadDigitos << " dígitos." << endl;

    return 0;
}
