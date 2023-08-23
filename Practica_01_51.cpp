// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  51
// Problema planteado:Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El
//método para obtener el cociente y el resto es por restas sucesivas

#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;
    int cociente = 0, resto;
//Ingresamos el dividendo
    cout << "Ingrese el dividendo: ";
    cin >> dividendo;

    cout << "Ingrese el divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "No se puede dividir por cero." << endl;
    } else {
        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }

        resto = dividendo;

        cout << "Cociente: " << cociente << endl;
        cout << "Resto: " << resto << endl;
    }

    return 0;
}
