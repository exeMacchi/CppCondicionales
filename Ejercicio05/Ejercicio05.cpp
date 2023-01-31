// 5. Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si
//    el carácter es una vocal minúscula o no.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char letra;

    cout << "Ingrese un caracter: "; cin >> letra;

    switch (letra) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "\nEl caracter escrito es una vocal minuscula." << endl;
            break;
        default:
            cout << "\nEl caracter escrito no es una vocal minuscula." << endl;
    }

    return 0;
}
