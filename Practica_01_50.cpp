// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  50
// Problema planteado: Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter.
//La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
//parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado.

#include <iostream>
using namespace std;

double calcularOperacion(int num1, int num2, char operacion) {
    double resultado = 0.0;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = static_cast<double>(num1) / num2;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operación no reconocida." << endl;
    }

    return resultado;
}

int main() {
    int a, b;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    double resultado = calcularOperacion(a, b, operacion);

    cout << "El resultado de la operación es: " << resultado << endl;

    return 0;
}
