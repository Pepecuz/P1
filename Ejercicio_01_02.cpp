// Materia: Programaci�n I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 2
// Problema planteado: �rea de un circulo

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double R=0;
    double volumEsfera =0;
    const double pi = 3.141593;

   //Datos que necesitamos para el calculo del area de una esfera
    printf("\n\tIntroduzca el radio de la esfera, en metros: ");
    scanf("%lf", &R);

    //Calculo como tal
    volumEsfera = 4/3 * pi * pow(R, 3);
    printf("\n\tEl volumen de la esfera es %lf metros c%cbicos.\n\n", volumEsfera,163);
    return 0;
}
