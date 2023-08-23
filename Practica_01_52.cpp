// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  52
// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o negativos.

#include <iostream>
using namespace std;
//Ingresamos valores de x y y
int main() {
    int x, y;
    int resultado = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    if (y >= 0) {
        for (int i = 1; i <= y; i++) {
            resultado *= x;
        }
    } else {
        for (int i = 1; i <= -y; i++) {
            resultado *= x;
        }
        resultado = 1 / resultado;
    }

    cout << "El resultado de " << x << " elevado a la potencia " << y << " es: " << resultado << endl;

    return 0;
}
