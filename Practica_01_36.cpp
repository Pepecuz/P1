// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  36
// Problema planteado:  Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la
//cantidad de alumnos mayores de 18 años, y la cantidad de alumnos que miden más de 1.75 cm

#include <iostream>

int main() {
    int n;
    int sumaEdades = 0;
    double sumaEstaturas = 0.0;
    int contadorMayores18 = 0;
    int contadorAlturaMayor175 = 0;

    std::cout << "Ingrese el número de alumnos: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        int edad;
        double estatura;

        std::cout << "Ingrese la edad del alumno " << i << ": ";
        std::cin >> edad;

        std::cout << "Ingrese la estatura del alumno " << i << " (en cm): ";
        std::cin >> estatura;

        sumaEdades += edad;
        sumaEstaturas += estatura;

        if (edad > 18) {
            contadorMayores18++;
        }

        if (estatura > 175.0) {
            contadorAlturaMayor175++;
        }
    }

    double edadPromedio = static_cast<double>(sumaEdades) / n;
    double estaturaPromedio = sumaEstaturas / n;

    std::cout << "Edad promedio: " << edadPromedio << " años" << std::endl;
    std::cout << "Estatura promedio: " << estaturaPromedio << " cm" << std::endl;
    std::cout << "Cantidad de alumnos mayores de 18 años: " << contadorMayores18 << std::endl;
    std::cout << "Cantidad de alumnos con estatura mayor a 1.75 cm: " << contadorAlturaMayor175 << std::endl;

    return 0;
}
