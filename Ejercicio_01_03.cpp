// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 3
// Problema planteado: Promedio notas

#include<iostream>
using namespace std;
main(){
 int n;//cantidad de notas
 float a,c=0,prom;
 cout<<"ingrese la cantidad de notas: ";cin>>n;
 for(int i=0;i<n;i++){
 cout<<"ingrese la nota "<<i+1<<": ";cin>>a;//el valor de a varia en cada ciclo
 c=c+a;
 }
 prom=c/n;
 cout<<"el promedio es: "<<prom;
}
//insertamos el numero de notas que queramos
