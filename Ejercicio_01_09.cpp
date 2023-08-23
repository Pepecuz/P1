// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz LLnos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 9
// Problema planteado: Ejercicio de los meses del año
#include <conio.h>
#include <stdio.h>

int main()
{
//Introducimos un numero del 1 al 12
    int mes;

    printf( "\n   Introduzca mes del a%co: ", 164 );
    scanf( "%d", &mes );

    switch ( mes )
    {
        case  1 : printf( "\n   Enero" );
                  break;
        case  2 : printf( "\n   Febrero" );
                  break;
        case  3 : printf( "\n   Marzo" );
                  break;
        case  4 : printf( "\n   Abril" );
                  break;
        case  5 : printf( "\n   Mayo" );
                  break;
        case  6 : printf( "\n   Junio" );
                  break;
        case  7 : printf( "\n   Julio" );
                  break;
        case  8 : printf( "\n   Agosto" );
                  break;
        case  9 : printf( "\n   Septiembre" );
                  break;
        case 10 : printf( "\n   Octubre" );
                  break;
        case 11 : printf( "\n   Noviembre" );
                  break;
        case 12 : printf( "\n   Diciembre" );
                  break;
        default : printf( "\n   ERROR: Mes incorrecto." );
    }

    getch(); /* Pausa */

    return 0;
}
