// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  62
// Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales
//al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
//2 pañales diarios. Se desea conocer el consumo total de pañales diarios.

#include <iostream>
using namespace std;

int main() {
    int numNinos1Anio = 0, numNinos2Anios = 0, numNinos3Anios = 0;
    int consumoTotal = 0;

    // Solicitar la cantidad de niños por edad
    cout << "Ingrese la cantidad de niños de 1 año: ";
    cin >> numNinos1Anio;

    cout << "Ingrese la cantidad de niños de 2 años: ";
    cin >> numNinos2Anios;

    cout << "Ingrese la cantidad de niños de 3 años: ";
    cin >> numNinos3Anios;

    // Calcular el consumo total de pañales
    consumoTotal = numNinos1Anio * 6 + numNinos2Anios * 3 + numNinos3Anios * 2;

    // Mostrar el resultado
    cout << "El consumo total de pañales diarios es: " << consumoTotal << endl;

    return 0;
}
