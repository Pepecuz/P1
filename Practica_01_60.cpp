// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  60
// Problema planteado: Elabore un programa en el que dado un número n entero positivo, imprima los n primeros cubos utilizando esta propiedad.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número válido." << endl;
    } else {
        cout << "Los primeros " << n << " cubos son:" << endl;

        for (int i = 1; i <= n; i++) {
            int cubo = i * i * i;
            cout << "Cubo de " << i << " = " << cubo << endl;
        }
    }

    return 0;
}
