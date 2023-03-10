// 4. Comprobar si un número digitado por el usuario es positivo o negativo.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{};

    cout << "Ingrese un número: "; cin >> N;

    if (N == 0) 
        cout << "\nEl número es igual a 0." << "\n";
    else if (N > 0) 
        cout << "\nEl número es positivo." << "\n";
    else 
        cout << "\nEl número es negativo." << "\n";

    return 0;
}