// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 19
// Problema planteado: Convertir coordenadas polares en rectangulares.

#include <iostream>
#include <cmath>
using namespace std;
//Introducimos un numero
int main() {
    float radio, anguloGrados;

    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Ingrese el ángulo en grados: ";
    cin >> anguloGrados;

    // Convertir el ángulo a radianes
    float anguloRadianes = anguloGrados * M_PI / 180.0;

    // Calcular coordenadas rectangulares
    float x = radio * cos(anguloRadianes);
    float y = radio * sin(anguloRadianes);

    cout << "Las coordenadas rectangulares son: (" << x << ", " << y << ")" << endl;

    return 0;
}
