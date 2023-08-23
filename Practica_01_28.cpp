// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  28
// Problema planteado:  Multiplicar dos números naturales, sin emplear el operador de la multiplicación,
// empleando sumas sucesivas.

#include <iostream>

int main() {
    int numero1, numero2;
    
    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;
    
    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;
    
    int resultado = 0;
    
    for (int i = 0; i < numero2; ++i) {
        resultado += numero1;
    }
    
    std::cout << "El resultado de la multiplicación es: " << resultado << std::endl;
    
    return 0;
}


