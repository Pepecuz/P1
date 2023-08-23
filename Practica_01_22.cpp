// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 22
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento quedependerá del número de computadoras que compre. Si las computadoras son menos
//de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.

#include <iostream>
using namespace std;
//Ingresamos el precio y la computadora que deseamos comprar
int main() {
    int cantidadComputadoras;
    float precioPorComputadora;

    cout << "Ingrese N° de computadoras que desea comprar: ";
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
