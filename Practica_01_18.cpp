// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 18
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.

#include <iostream>
using namespace std;
//Introducimos los lados y altura de una piramide cuadrada
int main() {
    float longitudBase, altura;

    cout << "Ingrese la longitud de un lado de la pirámide: ";
    cin >> longitudBase;

    cout << "Ingrese la altura de la pirámide: ";
    cin >> altura;

    float volumen = (longitudBase * longitudBase * altura) / 3;

    cout << "El volumen de la pirámide es: " << volumen << endl;

    return 0;
}
