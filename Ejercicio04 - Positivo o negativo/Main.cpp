// 4. Comprobar si un n�mero digitado por el usuario es positivo o negativo.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{};

    cout << "Ingrese un n�mero: "; cin >> N;

    if (N == 0) 
        cout << "\nEl n�mero es igual a 0." << "\n";
    else if (N > 0) 
        cout << "\nEl n�mero es positivo." << "\n";
    else 
        cout << "\nEl n�mero es negativo." << "\n";

    return 0;
}