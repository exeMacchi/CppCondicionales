// 2. Escriba un programa que lea tres n�meros y determine cu�l de ellos es 
//    el mayor.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    int A{}, B{}, C{}, Mayor{};

    cout << "Ingrese el primer n�mero: "; cin >> A;
    cout << "Ingrese el segundo n�mero: "; cin >> B;
    cout << "Ingrese el tercer n�mero: "; cin >> C;

    Mayor = A;

    if (B > Mayor) 
        Mayor = B;

    if (C > Mayor) 
        Mayor = C;
    

    cout << "\nEl n�mero mayor es: " << Mayor << "\n";

    return 0;
}