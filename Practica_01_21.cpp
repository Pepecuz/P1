// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 20
// Problema planteado: Leer un numero n y  tambien un intervalo....

#include <iostream>
using namespace std;
//Introducimos un numero
int main() {
    int n, a, b;

    cout << "Ingrese un n�mero n: ";
    cin >> n;

    cout << "Ingrese el l�mite inferior del intervalo (a): ";
    cin >> a;

    cout << "Ingrese el l�mite superior del intervalo (b): ";
    cin >> b;

    if (n >= a && n <= b) {
        cout << "El n�mero est� dentro del intervalo [" << a << ", " << b << "]." << endl;
        cout << "El cuadrado del n�mero es: " << n * n << endl;
    } else if (n < a) {
        cout << "El n�mero est� por debajo del intervalo." << endl;
        cout << "El valor inverso del n�mero es: " << 1.0 / n << endl;
    } else {
        cout << "El n�mero est� por encima del intervalo." << endl;
        cout << "La mitad del n�mero es: " << n / 2.0 << endl;
    }

    return 0;
}
