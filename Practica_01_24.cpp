// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  24
// Problema planteado:  Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>

int main() {
    int numero;
    
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;
    
    // Obtener el primer dígito dividiendo entre 10 repetidamente
    int primerDigito = numero;
    while (primerDigito >= 10) {
        primerDigito /= 10;
    }
    
    // Obtener el segundo dígito usando el residuo de la división entre 10
    int segundoDigito = numero % 10;
    
    // Calcular y mostrar la suma de los dos primeros dígitos
    int suma = primerDigito + segundoDigito;
    std::cout << "La suma de los dos primeros dígitos es: " << suma << std::endl;
    
    return 0;
}

