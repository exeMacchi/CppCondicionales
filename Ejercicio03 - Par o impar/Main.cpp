// 3. Realice un programa que lea un valor entero y determine si se trata de un 
//    n�mero par o impar.

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
        cout << "\nEl n�mero es cero." << "\n";
    else if (N % 2 == 0) 
        cout << "\nEl n�mero es par." << "\n";
    else 
        cout << "\nEl n�mero es impar." << "\n";

    return 0;
}