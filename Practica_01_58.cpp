// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  58
// Problema planteado: Generar:
//121
//12321
//1234321
//123454321
//12345654321
//1234567654321
//123456787654321
//12345678987654321 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número válido." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            // Imprimir números ascendentes
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            
            // Imprimir números descendentes
            for (int j = i - 1; j >= 1; j--) {
                cout << j;
            }

            cout << endl;
        }
    }

    return 0;
}



