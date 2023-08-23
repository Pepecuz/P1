// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    float distancia;

    printf("\nPrimer punto;\n");
    printf("X1: "); scanf("%d", &x1);
    printf("Y1: "); scanf("%d", &y1);

    printf("\nSegundo punto;\n");
    printf("X2: "); scanf("%d", &x2);
    printf("Y2: "); scanf("%d", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nDistancia: %.2f\n", distancia);

    return 0;
}
