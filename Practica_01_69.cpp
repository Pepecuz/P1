// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  69
// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int coeficienteBinomial(int n, int m) {
    if (n < m) {
        return 0; // Invalid input
    }
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    int resultado = coeficienteBinomial(n, m);

    cout << "Coeficiente binomial C(" << n << ", " << m << ") = " << resultado << endl;

    return 0;
}
