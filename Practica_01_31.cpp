// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  31
// Problema planteado:  Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    if (numero1 % numero2 == 0) {
        std::cout << numero1 << " es múltiplo de " << numero2 << std::endl;
    } else if (numero2 % numero1 == 0) {
        std::cout << numero2 << " es múltiplo de " << numero1 << std::endl;
    } else {
        std::cout << "Los números no son múltiplos entre sí." << std::endl;
    }

    return 0;
}



