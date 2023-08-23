// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  45
// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.

#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int contador = 0;
    int numero = 4; // Comenzamos desde el primer número compuesto

    long long sumaCuadrados = 0; // Usamos long long para evitar desbordamientos

    while (contador < 100) {
        if (!esPrimo(numero)) {
            sumaCuadrados += static_cast<long long>(numero) * numero; // Calcular el cuadrado y sumar
            contador++;
        }
        numero++;
    }

    cout << "La suma de los cuadrados de los primeros 100 números compuestos es: " << sumaCuadrados << endl;

    return 0;
}
