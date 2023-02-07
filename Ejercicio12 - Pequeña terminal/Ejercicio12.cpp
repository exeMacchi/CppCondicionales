// 12. Hacer un menú que considere las siguientes opciones:
//        • Caso 1: Cubo de un numero.
//        • Caso 2: Numero par o impar
//        • Case 3: salir.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float Resultado = 0;
    int N, Opcion;

    cout << "Ingrese un numero: "; cin >> N;

    cout << "\n1. Cubo del numero." << endl;
    cout << "2. Saber si es par o impar." << endl;
    cout << "3. Salir." << endl;
    cout << "Que quiere hacer?: "; cin >> Opcion;

    switch (Opcion) {
        case 1:
            Resultado = pow(N, 3);
            cout << "\n" << N << " al cubo es: " << Resultado << endl;
            break;

        case 2:
            if (N % 2 == 0) {
                cout << "\n" << N << " es par." << endl;
            }
            else {
                cout << "\n" << N << " es impar." << endl;
            }
            break;

        case 3:
            cout << "\nSaliendo del programa..." << endl;
            break;
        }
    return 0;
}
