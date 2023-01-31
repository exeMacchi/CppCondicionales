// 2. Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, Mayor;

    cout << "Ingrese el primer numero: "; cin >> A;
    cout << "Ingrese el segundo numero: "; cin >> B;
    cout << "Ingrese el tercer numero: "; cin >> C;

    Mayor = A;

    if (B > Mayor) {
        Mayor = B;
    }

    if (C > Mayor) {
        Mayor = C;
    }

    cout << "\nEl numero mayor es: " << Mayor << endl;
    return 0;
}
