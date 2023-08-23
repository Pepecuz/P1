// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  53
// Problema planteado: . Escriba un programa que permita al usuario obtener los valores de las funciones trigonométricas:

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double anguloGrados;
    
    cout << "Ingrese el ángulo en grados: ";
    cin >> anguloGrados;

    // Convertir el ángulo a radianes
    double anguloRadianes = anguloGrados * M_PI / 180.0;

    double seno = sin(anguloRadianes);
    double coseno = cos(anguloRadianes);
    double tangente = tan(anguloRadianes);

    cout << "Ángulo en grados: " << anguloGrados << endl;
    cout << "Ángulo en radianes: " << anguloRadianes << endl;
    cout << "Seno: " << seno << endl;
    cout << "Coseno: " << coseno << endl;

    if (anguloGrados == 90.0 || anguloGrados == 270.0) {
        cout << "No se puede calcular la tangente para 90° o 270°." << endl;
    } else {
        cout << "Tangente: " << tangente << endl;
    }

    return 0;
}
