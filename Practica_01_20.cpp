// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor.

#include <iostream>
using namespace std;

int main() {
    int a1, b2, c3;

    cout << "Ingrese el primer número: ";
    cin >> a1;

    cout << "Ingrese el segundo número: ";
    cin >> b2;

    cout << "Ingrese el tercer número: ";
    cin >> c3;

    if (a1 < b2 && a1 < c3) {
        cout << "El menor número es: " << a1 << endl;
    } else if (b2 < a1 && b2 < c3) {
        cout << "El menor número es: " << b2 << endl;
    } else {
        cout << "El menor número es: " << c3 << endl;
    }

    return 0;
}
