// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  67
// Problema planteado: Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman un número primo, de ser así imprima el mensaje respectivo.

#include <iostream>
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
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El número debe ser positivo." << endl;
        return 1;
    }

    int sumaDigitos = 0;
    int num = numero;
    while (num > 0) {
        int digito = num % 10;
        if (digito != 0) {
            sumaDigitos += digito;
        }
        num /= 10;
    }

    if (esPrimo(sumaDigitos)) {
        cout << "La suma de los dígitos distintos de cero (" << sumaDigitos << ") es un número primo." << endl;
    } else {
        cout << "La suma de los dígitos distintos de cero (" << sumaDigitos << ") no es un número primo." << endl;
    }

    return 0;
}
