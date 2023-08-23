// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 20
// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor.

#include <iostream>
using namespace std;

int main() {
    int a1, b2, c3;

    cout << "Ingrese el primer n�mero: ";
    cin >> a1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> b2;

    cout << "Ingrese el tercer n�mero: ";
    cin >> c3;

    if (a1 < b2 && a1 < c3) {
        cout << "El menor n�mero es: " << a1 << endl;
    } else if (b2 < a1 && b2 < c3) {
        cout << "El menor n�mero es: " << b2 << endl;
    } else {
        cout << "El menor n�mero es: " << c3 << endl;
    }

    return 0;
}
