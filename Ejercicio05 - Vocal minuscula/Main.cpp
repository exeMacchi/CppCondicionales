// 5. Escriba un programa que lea de la entrada est�ndar un car�cter e indique 
//    en la salida est�ndar si el car�cter es una vocal min�scula o no.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    char letra{};

    cout << "Ingrese un car�cter: "; cin >> letra;

    switch (letra) 
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "\nEl car�cter escrito es una vocal min�scula." << "\n";
            break;
        default:
            cout << "\nEl car�cter escrito no es una vocal min�scula." << "\n";
    }

    return 0;
}