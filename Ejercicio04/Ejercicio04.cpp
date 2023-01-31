// 4. Comprobar si un número digitado por el usuario es positivo o negativo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: "; cin >> N;

    if (N == 0) {
        cout << "\nEl numero es igual a 0." << endl;
    }
    else if (N > 0) {
        cout << "\nEl numero es positivo." << endl;
    }
    else {
        cout << "\nEl numero es negativo." << endl;
    }

    return 0;
}
