// 5. Escriba un programa que lea de la entrada estándar un carácter e indique 
//    en la salida estándar si el carácter es una vocal minúscula o no.

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
        default:
            cout << "\nEl carácter escrito no es una vocal minúscula." << "\n";
    }

    return 0;
}