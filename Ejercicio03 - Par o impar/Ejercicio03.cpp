// 3. Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: "; cin >> N;

    if (N == 0) {
        cout << "\nEl numero es cero." << endl;
    }
    else if (N % 2 == 0) {
        cout << "\nEl numero es par." << endl;
    }
    else {
        cout << "\nEl numero es impar." << endl;
    }

    return 0;
}
