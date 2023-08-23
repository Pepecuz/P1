// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 22
// Problema planteado: En una f�brica de computadoras se planea ofrecer a los clientes un descuento quedepender� del n�mero de computadoras que compre. Si las computadoras son menos
//de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.

#include <iostream>
using namespace std;
//Ingresamos el precio y la computadora que deseamos comprar
int main() {
    int cantidadComputadoras;
    float precioPorComputadora;

    cout << "Ingrese N� de computadoras que desea comprar: ";
    cin >> cantidadComputadoras;

    cout << "Ingrese el precio de cada computadora: ";
    cin >> precioPorComputadora;

    float totalSinDescuento = cantidadComputadoras * precioPorComputadora;
    float descuento = 0.0;

    if (cantidadComputadoras < 5) {
        descuento = 0.1; // 10% de descuento
    } else if (cantidadComputadoras >= 5 && cantidadComputadoras < 10) {
        descuento = 0.2; // 20% de descuento
    } else {
        descuento = 0.4; // 40% de descuento
    }

    float totalConDescuento = totalSinDescuento * (1 - descuento);

    cout << "Total sin descuento: $" << totalSinDescuento << endl;
    cout << "Descuento aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Total con descuento: $" << totalConDescuento << endl;

    return 0;
}
