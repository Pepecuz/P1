// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  29
// Problema planteado:  En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”,
//dicha promoción consiste en lo siguiente: Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
//compran de cinco a 10 y de 200 Bs. si se compran más de 10.
//Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
//llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>

int main() {
    int cantidadLlantas;
    
    std::cout << "Ingrese la cantidad de llantas que desea comprar: ";
    std::cin >> cantidadLlantas;
    
    double precioPorLlanta;
    
    if (cantidadLlantas < 5) {
        precioPorLlanta = 300.0;
    } else if (cantidadLlantas >= 5 && cantidadLlantas <= 10) {
        precioPorLlanta = 250.0;
    } else {
        precioPorLlanta = 200.0;
    }
    
    double totalPagar = precioPorLlanta * cantidadLlantas;
    
    std::cout << "El precio por cada llanta es: " << precioPorLlanta << " Bs." << std::endl;
    std::cout << "El total a pagar por " << cantidadLlantas << " llantas es: " << totalPagar << " Bs." << std::endl;
    
    return 0;
}

