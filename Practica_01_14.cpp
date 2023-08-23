// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 14
// Problema planteado: Escriba un programa que dato varios valores num�ricos, hasta el que el usuario ingrese
//el valor de cero calculo la suma y el promedio de estos.

#include <iostream>
using namespace std;

int main() {
    int valor;
    int suma = 0;
    int contador = 0;
    //Ingresamos valores
    cout << "Ingrese valores num�ricos (ingrese 0 para finalizar):\n";

    do {
        cin >> valor;

        if (valor != 0) {
            suma += valor;
            contador++;
        }
    } while (valor != 0);

    if (contador > 0) {
        float promedio = static_cast<float>(suma) / contador;

        cout << "La suma de valores es: " << suma << endl;
        cout << "El promedio de valores es: " << promedio << endl;
    } else {
        cout << "No se ingresaron valores." << endl;
    }

    return 0;
}
