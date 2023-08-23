// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 15
// Problema planteado: Escriba la sucesión de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de términos para la sucesión de Fibonacci que desea ver: ";
    cin >> n;

    int primero = 0;
    int segundo = 1;

    cout << "Sucesión de Fibonacci:\n";

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
