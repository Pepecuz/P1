// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 17
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas

#include <iostream>
using namespace std;

int main() {
    float valorEnBolivianos;

    cout << "Ingrese un valor en bolivianos: ";
    cin >> valorEnBolivianos;

    // Tasas de conversión
    const float tasaEuro = 0.11;  // 1 Euro = 11 bolivianos (aprox.)
    const float tasaDolar = 0.12; // 1 Dólar = 12 bolivianos (aprox.)
    const float tasaLibra = 0.09; // 1 Libra = 9 bolivianos (aprox.)

    float valorEnEuros = valorEnBolivianos * tasaEuro;
    float valorEnDolares = valorEnBolivianos * tasaDolar;
    float valorEnLibras = valorEnBolivianos * tasaLibra;

    cout << "Valor en Euros: " << valorEnEuros << endl;
    cout << "Valor en Dólares: " << valorEnDolares << endl;
    cout << "Valor en Libras Esterlinas: " << valorEnLibras << endl;

    return 0;
}
