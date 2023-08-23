// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 13
// Problema planteado: Indique la cantidad de d�gitos que tiene un n�mero entero

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese n�mero entero: ";
    cin >> numero;
    //Ingresamos un numero entero
    int cantidadDigitos = 0;
    int numeroTemporal = numero;

    // Contara los digitos que tiene el numero
    while (numeroTemporal != 0) {
        numeroTemporal /= 10;
        cantidadDigitos++;
    }

    cout << "El n�mero " << numero << " tiene " << cantidadDigitos << " d�gitos." << endl;

    return 0;
}
