// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  33
// Problema planteado:  Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días. 

#include <iostream>

int main() {
    int dia1, mes1, anio1;
    int dia2, mes2, anio2;

    std::cout << "Ingrese la primera fecha (día mes año): ";
    std::cin >> dia1 >> mes1 >> anio1;

    std::cout << "Ingrese la segunda fecha (día mes año): ";
    std::cin >> dia2 >> mes2 >> anio2;

    // Convertir ambas fechas a días
    int diasFecha1 = anio1 * 360 + mes1 * 30 + dia1;
    int diasFecha2 = anio2 * 360 + mes2 * 30 + dia2;

    // Calcular la diferencia en días
    int diferenciaDias = std::abs(diasFecha2 - diasFecha1);

    std::cout << "La diferencia en días entre las dos fechas es: " << diferenciaDias << " días" << std::endl;

    return 0;
}




