// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 10
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
