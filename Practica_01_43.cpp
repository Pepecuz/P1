// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  43
// Problema planteado: Obtener el promedio de números enteros positivos introducidos por teclado, el
//algoritmo se detiene cuando se lea un número negativo o cero.

#include <iostream>
using namespace std;
//Ingresamos numeros enteros
int main() {
    int num, sum = 0, count = 0;

    cout << "Ingrese números enteros positivos (detenga la entrada con un número negativo o cero):" << endl;

    while (true) {
        cout << "Ingrese un número: ";
        cin >> num;

        if (num <= 0) {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double promedio = static_cast<double>(sum) / count;
        cout << "El promedio de los números ingresados es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números positivos." << endl;
    }

    return 0;
}

