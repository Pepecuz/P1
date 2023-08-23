// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 7
// Problema planteado: Numero amigo

#include <iostream>
using namespace std;

int main()
	{
	int numero, i, resto;
	cout << "Este programa muestra los divisores de un número" << endl;
	cout << "Dame un número: ";
	cin >> numero;
	cout << "Sus divisores son: ";
		for (i=1; i<=numero ; i=i+1)
			{
			resto = numero%i;
			if (resto==0)
				{
				cout << i << " ";
				}
			}
	cout << endl;
	return 0;
	}
