// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 20
// Problema planteado: Leer un numero n y  tambien un intervalo....

#include <iostream>
using namespace std;
//Introducimos un numero
int main() {
    int n, a, b;

    cout << "Ingrese un número n: ";
    cin >> n;

    cout << "Ingrese el límite inferior del intervalo (a): ";
    cin >> a;

    cout << "Ingrese el límite superior del intervalo (b): ";
    cin >> b;

    if (n >= a && n <= b) {
        cout << "El número está dentro del intervalo [" << a << ", " << b << "]." << endl;
        cout << "El cuadrado del número es: " << n * n << endl;
    } else if (n < a) {
        cout << "El número está por debajo del intervalo." << endl;
        cout << "El valor inverso del número es: " << 1.0 / n << endl;
    } else {
        cout << "El número está por encima del intervalo." << endl;
        cout << "La mitad del número es: " << n / 2.0 << endl;
    }

    return 0;
}
