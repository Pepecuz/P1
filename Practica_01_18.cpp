// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 18
// Problema planteado: Escribir un programa que calcule el volumen de una pir�mide recta de base cuadrada.

#include <iostream>
using namespace std;
//Introducimos los lados y altura de una piramide cuadrada
int main() {
    float longitudBase, altura;

    cout << "Ingrese la longitud de un lado de la pir�mide: ";
    cin >> longitudBase;

    cout << "Ingrese la altura de la pir�mide: ";
    cin >> altura;

    float volumen = (longitudBase * longitudBase * altura) / 3;

    cout << "El volumen de la pir�mide es: " << volumen << endl;

    return 0;
}
