// 7. Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad 
//    introducida está en el rango [18-25].

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese una edad: "; cin >> N;

    if (N > 17 && N < 26) {
        cout << "\nLa edad introducida esta dentro del rango 18-25." << endl;
    }
    else {
        cout << "\nLa edad introducida no esta dentro del rango de edad requerido." << endl;
    }
    return 0;
}
