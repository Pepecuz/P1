// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  68
// Problema planteado: . Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y
//determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios
    const int cantidadNumeros = 50;
    int numerosPrimos = 0;

    for (int i = 0; i < cantidadNumeros; ++i) {
        int numeroAleatorio = rand() % 99 + 1; // Generar número aleatorio en el rango (1-99)

        if (esPrimo(numeroAleatorio)) {
            cout << numeroAleatorio << " es primo." << endl;
            numerosPrimos++;
        } else {
            cout << numeroAleatorio << " no es primo." << endl;
        }
    }

    cout << "Cantidad de números primos: " << numerosPrimos << endl;

    return 0;
}
