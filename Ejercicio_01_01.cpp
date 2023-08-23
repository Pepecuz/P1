// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 1
// Problema planteado: Área de un triángulo

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
