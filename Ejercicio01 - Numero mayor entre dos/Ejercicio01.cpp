// 1. Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B;

    cout << "Numero A: "; cin >> A;
    cout << "Numero B: "; cin >> B;

    if (A == B) {
        cout << "\nA y B son iguales." << endl;
    }
    else if (A > B) {
        cout << "\nA es mayor que B." << endl;
    }
    else {
        cout << "\nB es mayor que A." << endl;
    }

    return 0;
}
