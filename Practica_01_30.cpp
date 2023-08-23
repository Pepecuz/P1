// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  30
// Problema planteado:  Calcular la siguiente sucesión

#include <iostream>

int main() {
    int n;

    std::cout << "Ingrese un valor para n: ";
    std::cin >> n;

    double resultado = 0.0;

    for (int i = 2; i <= n + 1; ++i) {
        if (i % 2 == 0) {
            resultado -= static_cast<double>(i) / (i - 1);
        } else {
            resultado += static_cast<double>(i) / (i - 1);
        }
    }

    std::cout << "El resultado de la sucesión es: " << resultado << std::endl;

    return 0;
}




