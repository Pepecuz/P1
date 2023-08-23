// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  39
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que
//si el primer número es mayor al segundo, genere una serie descendente, caso
//contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.

#include <iostream>

int main() {
    int valor1, valor2;

    std::cout << "Ingrese el primer valor entero: ";
    std::cin >> valor1;

    std::cout << "Ingrese el segundo valor entero (distinto del primero): ";
    std::cin >> valor2;

    if (valor1 > valor2) {
        // Generar serie descendente
        for (int i = valor1; i >= valor2; --i) {
            std::cout << i << " ";
        }
    } else {
        // Generar serie ascendente
        for (int i = valor1; i <= valor2; ++i) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}



