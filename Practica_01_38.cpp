// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  38
// Problema planteado: En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9
//millones. Las tasas de crecimiento de la población son de 2% y 3% respectivamente.
//Desarrollar un programa para saber en qué año la población del país B supera a la de A.

#include <iostream>

int main() {
    int anio = 2009; // Año inicial
    double poblacionA = 25.0; // Población del país A en millones
    double poblacionB = 19.9; // Población del país B en millones

    while (poblacionB <= poblacionA) {
        poblacionA *= 1.02; // Aumento del 2% en la población del país A
        poblacionB *= 1.03; // Aumento del 3% en la población del país B
        anio++;
    }

    std::cout << "La población del país B superará a la del país A en el año: " << anio << std::endl;

    return 0;
}

