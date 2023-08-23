// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  34
// Problema planteado:  Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>

int main() {
    int n;
    
    std::cout << "Ingrese el número de términos que desea generar: ";
    std::cin >> n;
    
    int a = 1; // Primer término
    int b = 1; // Segundo término
    int c = 2; // Tercer término
    int d = 4; // Cuarto término
    
    std::cout << a << " ";
    
    for (int i = 1; i <= n - 1; ++i) {
        if (i == 1) {
            std::cout << b << " ";
        } else if (i == 2) {
            std::cout << c << " ";
        } else if (i == 3) {
            std::cout << d << " ";
        } else {
            int nuevoTermino = a + b + c + d + i;
            std::cout << nuevoTermino << " ";
            a = b;
            b = c;
            c = d;
            d = nuevoTermino;
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}


