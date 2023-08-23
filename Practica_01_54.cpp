// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  53
// Problema planteado: Hallar la raíz cuadrada de un número por aproximaciones, utilizar

#include <iostream>
#include <cmath>
using namespace std;

double calcularRaizCuadrada(double numero, int iteraciones) {
    double aproximacion = numero / 2; // Comenzamos con una aproximación inicial
    for (int i = 0; i < iteraciones; i++) {
        aproximacion = 0.5 * (aproximacion + numero / aproximacion); // Fórmula de aproximación de Newton
    }
    return aproximacion;
}

int main() {
    double numero;
    int iteraciones;

    cout << "Ingrese el número para calcular su raíz cuadrada: ";
    cin >> numero;

    cout << "Ingrese la cantidad de iteraciones: ";
    cin >> iteraciones;

    if (numero < 0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
    } else {
        double raizAproximada = calcularRaizCuadrada(numero, iteraciones);
        double raizReal = sqrt(numero);

        cout << "Raíz cuadrada aproximada: " << raizAproximada << endl;
        cout << "Raíz cuadrada real: " << raizReal << endl;
    }

    return 0;
}
