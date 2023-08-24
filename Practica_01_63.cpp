// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio:  63
// Problema planteado: Leer un valor numérico y convertirlo a un número romano (1-9999)

#include <iostream>
#include <string>

std::string numeroRomano(int num) {
    if (num < 1 || num > 9999) {
        return "Número fuera de rango";
    }

    std::string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    std::string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    std::string millares[] = {"", "M", "MM", "MMM"};

    std::string romano = millares[num / 1000] + centenas[(num % 1000) / 100] +
                         decenas[(num % 100) / 10] + unidades[num % 10];

    return romano;
}

int main() {
    int numero;
    std::cout << "Ingrese un número entre 1 y 9999: ";
    std::cin >> numero;

    std::string romano = numeroRomano(numero);
    std::cout << "Número romano: " << romano << std::endl;

    return 0;
}
