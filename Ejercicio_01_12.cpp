// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 12
// Problema planteado: Mostrar los primeros 100 numeros primos

#include <stdlib.h>
#include <stdio.h>
#define NMAX 100

int main()
{
int n,m;
int i;

printf(�Los primeros %d numeros primos son : \n�, NMAX);
m=0;
n=2;
while(m<NMAX)
{
for(i=2;i<n;i++)
if(n%i==0)break;

        if(i==n)
{
printf(�%d t�,n);
m++;
}
n++;
}

      system(�PAUSE�);
return 0;
}
