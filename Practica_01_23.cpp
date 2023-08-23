// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 23
// Problema planteado:

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un entero n > 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "El entero debe ser mayor que 1." << endl;
        return 1; // Termina el programa con código de error
    }

    cout << "Secuencia de conjetura de Ullman para " << n << ":" << endl;

    while (n != 1) {
        cout << n << " ";

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }

    cout << n << endl; // Imprime el último número de la secuencia (siempre será 1)

    return 0;
}






