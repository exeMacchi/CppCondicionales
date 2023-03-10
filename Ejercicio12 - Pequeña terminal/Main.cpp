/*
    12. Hacer un men� que considere las siguientes opciones:
           � Caso 1: Cubo de un numero.
           � Caso 2: Numero par o impar
           � Case 3: salir.
*/        

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float Resultado{};
    int N{}, Opcion{};

    cout << "Ingrese un n�mero: "; cin >> N;
    
    cout << "\n";
    cout << "1. Cubo del n�mero."         << "\n";
    cout << "2. Saber si es par o impar." << "\n";
    cout << "3. Salir."                   << "\n";

    cout << "Qu� quiere hacer?: "; cin >> Opcion;

    switch (Opcion) 
    {
        case 1:
            Resultado = pow(N, 3);
            cout << "\n" << N << " al cubo es: " << Resultado << "\n";
            break;

        case 2:
            if (N % 2 == 0) 
                cout << "\n" << N << " es par." << "\n";
            else 
                cout << "\n" << N << " es impar." << "\n";
            break;

        case 3:
            cout << "\nSaliendo del programa..." << "\n";
            break;
    }

    return 0;
}