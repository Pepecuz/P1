// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  57
// Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
//ingresamos un numero entero
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número válido." << endl;
    } else {
        cout << "Cuadrados perfectos en el rango de 1 a " << n << ":" << endl;
        
        for (int i = 1; i <= n; i++) {
            int raiz = sqrt(i);
            if (raiz * raiz == i) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

