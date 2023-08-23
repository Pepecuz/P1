// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  37
// Problema planteado: Obtenga el factorial de un número entero sin emplear el producto.

#include <iostream>

int main() {
    int n;

    std::cout << "Ingrese un número entero: ";
    std::cin >> n;

    int factorial = 1;
    int multiplicador = 1;

    while (multiplicador <= n) {
        factorial += factorial * multiplicador;
        multiplicador++;
    }

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;

    return 0;
}

