// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 1
// Problema planteado: �rea de un tri�ngulo

#include <iostream>



float base;
float altura;
float resultado;



using namespace std;



int main(){
cout << "Ingrese la base del triangulo: ";
cin >> base;

cout << "Ingrese la altura del triangulo: ";
cin >> altura;
resultado=(base*altura)/2; // Buscamos la formula matematica para calcular el area de un triangulo
cout << "El area de su triangulo es: " << resultado << endl;

cin.ignore();
cin.get();

}
