// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 10
// Problema planteado: Programa de vocal o consonante

#include <iostream>
//Introducimos una letra para ver si es vocal o no
using namespace std;

int main()
{
char letra;
cout<<"Digite la letra:\n";cin>>letra;

if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    cout<<"Es una vocal";
else
    cout<<"No es vocal";


    return 0;
}
