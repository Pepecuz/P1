// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  32
// Problema planteado:  Leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>

int main() {
    int numero;
    
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;
    
    int numeroReverso = 0;
    
    while (numero != 0) {
        int digito = numero % 10;
        numeroReverso = numeroReverso * 10 + digito;
        numero /= 10;
    }
    
    std::cout << "El número con las cifras al revés es: " << numeroReverso << std::endl;
    
    return 0;
}



