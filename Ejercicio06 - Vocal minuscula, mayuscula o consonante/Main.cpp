// 6. Escriba un programa que lea de la entrada estándar un carácter e indique
//    en la salida estándar si el carácter es una vocal minúscula, es una vocal
//    mayúscula o no es una vocal.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    char letra{};

    cout << "Ingrese un carácter: "; cin >> letra;

    switch (letra) 
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "\nEl carácter escrito es una vocal minúscula." << "\n";
            break;

        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "\nEl carácter escrito es una vocal mayúscula." << "\n";
            break;

        default:
            cout << "\nEl carácter escrito no es una vocal." << "\n";
    }
    return 0;
}