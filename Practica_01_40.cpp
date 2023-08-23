// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  40
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
//5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio
//del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el
//cambio a entregar empleando el menor número posible de monedas.

#include <iostream>
using namespace std;

int main() {
    double precio, cantidad;
    cout << "Ingrese el precio del artículo en Bs.: ";
    cin >> precio;

    cout << "Ingrese la cantidad entregada por el consumidor en Bs.: ";
    cin >> cantidad;

    double cambio = cantidad - precio;

    // Convertir el cambio a centavos para facilitar los cálculos
    int cambioCentavos = cambio * 100;

    // Calcular el número de monedas de cada tipo
    int monedas5 = cambioCentavos / 500;
    cambioCentavos %= 500;

    int monedas1 = cambioCentavos / 100;
    cambioCentavos %= 100;

    int monedas50 = cambioCentavos / 50;
    cambioCentavos %= 50;

    int monedas20 = cambioCentavos / 20;
    cambioCentavos %= 20;

    int monedas10 = cambioCentavos / 10;

    // Mostrar el cambio en monedas
    cout << "Cambio a entregar:" << endl;
    cout << "Monedas de 5 Bs.: " << monedas5 << endl;
    cout << "Monedas de 1 Bs.: " << monedas1 << endl;
    cout << "Monedas de 0.50 Bs.: " << monedas50 << endl;
    cout << "Monedas de 0.20 Bs.: " << monedas20 << endl;
    cout << "Monedas de 0.10 Bs.: " << monedas10 << endl;

    return 0;
}


