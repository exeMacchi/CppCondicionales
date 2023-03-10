// 2. Escriba un programa que lea tres números y determine cuál de ellos es 
//    el mayor.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    int A{}, B{}, C{}, Mayor{};

    cout << "Ingrese el primer número: "; cin >> A;
    cout << "Ingrese el segundo número: "; cin >> B;
    cout << "Ingrese el tercer número: "; cin >> C;

    Mayor = A;

    if (B > Mayor) 
        Mayor = B;

    if (C > Mayor) 
        Mayor = C;
    

    cout << "\nEl número mayor es: " << Mayor << "\n";

    return 0;
}