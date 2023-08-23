// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  55
// Problema planteado: Generar las secuencias:
//1 2 3 4 …………..n
//1 2 3 4….. n-1
//1 2 3 …...n-2
//……..
//1

#include <iostream>
using namespace std;

void generarSecuencia(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número válido." << endl;
    } else {
        generarSecuencia(n);
    }

    return 0;
}

