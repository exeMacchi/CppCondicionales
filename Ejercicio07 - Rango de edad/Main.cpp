// 7. Escriba un programa que solicite una edad (un entero) e indique en la 
//    salida estándar si la edad introducida está en el rango [18-25].

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{};

    cout << "Ingrese una edad: "; cin >> N;

    if (N > 17 && N < 26) 
        cout << "\nLa edad introducida está dentro del rango 18-25." << "\n";
    else 
        cout << "\nLa edad introducida no está dentro del rango de edad " 
             << "requerido." << "\n";

    return 0;
}