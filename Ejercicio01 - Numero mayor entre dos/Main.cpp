// 1. Escriba un programa que lea dos n�meros y determine cu�l de ellos 
//    es el mayor.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int A{}, B{};

    cout << "N�mero A: "; cin >> A;
    cout << "N�mero B: "; cin >> B;

    if (A == B) 
        cout << "\nA y B son iguales." << "\n";
    else if (A > B) 
        cout << "\nA es mayor que B." << "\n";
    else 
        cout << "\nB es mayor que A." << "\n";

    return 0;
}