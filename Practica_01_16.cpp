// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 16
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas,

#include <iostream>
using namespace std;
//Introducimos un numero entero
int main() {
    int segundos;

    cout << "Ingrese un valor en segundos: ";
    cin >> segundos;

    int horas, minutos, segundosRestantes;

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;

    minutos = segundosRestantes / 60;
    segundosRestantes %= 60;

    cout << "Equivalente a: " << horas << " horas, " << minutos << " minutos, " << segundosRestantes << " segundos." << endl;

    return 0;
}
