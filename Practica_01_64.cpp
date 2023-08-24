// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  64
// Problema planteado: Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numero;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El número debe ser positivo." << std::endl;
        return 1;
    }

    
    std::vector<int> digitos;
    while (numero > 0) {
        digitos.push_back(numero % 10);
        numero /= 10;
    }

    if (digitos.empty()) {
        digitos.push_back(0); 
    }

    // Ordenar los dígitos de menor a mayor
    std::sort(digitos.begin(), digitos.end());

    
    int numeroOrdenado = 0;
    for (int i = 0; i < digitos.size(); ++i) {
        numeroOrdenado = numeroOrdenado * 10 + digitos[i];
    }

    std::cout << "Número ordenado: " << numeroOrdenado << std::endl;

    return 0;
}
