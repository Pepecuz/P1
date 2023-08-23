// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  42
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay
//en la granja. La calidad de cada gallina se obtiene según la fórmula:
//Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone 

#include <iostream>
using namespace std;

int main() {
    int n;
    double peso, altura, numHuevos;

    cout << "Ingrese la cantidad de gallinas: ";
    cin >> n;

    double sumaCalidad = 0.0;

    for (int i = 1; i <= n; i++) {
        cout << "Gallina " << i << endl;

        cout << "Ingrese el peso de la gallina en kg: ";
        cin >> peso;

        cout << "Ingrese la altura de la gallina en cm: ";
        cin >> altura;

        cout << "Ingrese el número de huevos que pone: ";
        cin >> numHuevos;

        double calidad = (peso * altura) / numHuevos;
        sumaCalidad += calidad;

        cout << "Calidad de la gallina " << i << ": " << calidad << endl;
        cout << endl;
    }

    double promedioCalidad = sumaCalidad / n;

    cout << "Promedio de calidad de las " << n << " gallinas: " << promedioCalidad << endl;

    return 0;
}
