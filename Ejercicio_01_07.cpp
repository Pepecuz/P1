// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 7
// Problema planteado: Numero amigo

#include <iostream>
using namespace std;

int main()
	{
	int numero, i, resto;
	cout << "Este programa muestra los divisores de un n�mero" << endl;
	cout << "Dame un n�mero: ";
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
