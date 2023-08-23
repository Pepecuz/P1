// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 15
// Problema planteado: Escriba la sucesi�n de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de t�rminos para la sucesi�n de Fibonacci que desea ver: ";
    cin >> n;

    int primero = 0;
    int segundo = 1;

    cout << "Sucesi�n de Fibonacci:\n";

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            cout << primero << " ";
        } else {
            int siguiente = primero + segundo;
            cout << siguiente << " ";
            primero = segundo;
            segundo = siguiente;
        }
    }

    cout << endl;

    return 0;
}
