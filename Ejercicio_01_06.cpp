// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 6
// Problema planteado: Numero primo

#include<iostream>
#include <math.h>
using namespace std;
//introducimos un numero cualquiera
int main(){
    int numero;
    bool flag=true;
    cin>>numero;
    for(int i=2;i<=sqrt(numero) && flag;i++){
            if(numero%i==0) flag=false;
    }
    cout<<(flag?"Si es primo":"No es primo")<<endl;
}
