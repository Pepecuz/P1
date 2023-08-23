// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 16
// Problema planteado: Leer un n�mero entero que represente un valor en segundos y convierta en: horas,

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
