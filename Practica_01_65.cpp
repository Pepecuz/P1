// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  65
// Problema planteado: Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo de manera literal:

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número no mayor a dos dígitos: ";
    cin >> numero;

    if (numero < 0 || numero > 99) {
        cout << "El número está fuera del rango permitido." << endl;
        return 1;
    }

    string numerosDel0al19[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", 
                                "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    if (numero < 20) {
        cout << "Número en literal: " << numerosDel0al19[numero] << endl;
    } else {
        int unidad = numero % 10;
        int decena = numero / 10;
        cout << "Número en literal: " << decenas[decena];
        if (unidad != 0) {
            cout << " y " << numerosDel0al19[unidad];
        }
        cout << endl;
    }

    return 0;
}
