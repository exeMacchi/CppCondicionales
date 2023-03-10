// 11. Realizar un programa que simule un cajero automatico con un saldo inicial 
//     de 1000 pesos.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float saldo{ 1000 }, Dinero{};
    int Opcion{};
    char Nombre[20]{}, Operacion{};
    bool Exit{ false };

    cout << "Por favor, ingrese su nombre: "; cin.getline(Nombre, 20, '\n');
    cout << "\n";
    cout << "\n";
    cout << "---------------------------------------------------------" << "\n";
    cout << "---------------------------------------------------------" << "\n";
    cout << "        Bienvenido a su cajero virtual, " << Nombre << "\n";
    cout << "\n";

    while (!Exit) 
    {
        cout << "\n------------------------------------"   << "\n";
        cout << "1. Depositar dinero dentro de su cuenta." << "\n";
        cout << "2. Retirar dinero de su cuenta."          << "\n";
        cout << "3. Consultar el balance de su cuenta."    << "\n";
        cout << "4. Salir."                                << "\n";

        cout << "\nPor favor, seleccione una opción: "; cin >> Opcion;

        if (Opcion > 4 || Opcion <= 0) 
        {
            cout << "\nError: opción no disponible." << "\n";
            return 0;
        }

        cout << "\n";

        switch (Opcion) 
        {
            case 1:
                cout << "Cuánto dinero quiere depositar?: $"; cin >> Dinero;
                saldo += Dinero;

                cout << "\nSu nuevo balance: $" << saldo << "\n";

                cout << "Quiere realizar alguna otra operación? (Si = 'y' " 
                     << "/ No = 'n'): "; cin >> Operacion;

                if (Operacion == 'n') 
                    Exit = true;
                else 
                    cout << "\n------------------------------------";
                
                break;

            case 2:
                cout << "Cuánto dinero quiere retirar?: $"; cin >> Dinero;
                if ((saldo - Dinero) < 0) 
                {
                    cout << "\nError: el retiro excede el balance disponible. " 
                         << "Por favor, consulte su balance actual." << "\n";
                }
                else 
                {
                    saldo -= Dinero;
                    cout << "\nSu nuevo balance: $" << saldo << "\n";
                    cout << "Quiere realizar alguna otra operación? (Si = 'y' " 
                     << "/ No = 'n'): "; cin >> Operacion;

                    if (Operacion == 'n') 
                        Exit = true;
                    else 
                        cout << "\n------------------------------------";
                }
                break;

            case 3:
                cout << "Su balance actual: $" << saldo << "\n";
                cout << "Quiere realizar alguna otra operación? (Si = 'y' " 
                     << "/ No = 'n'): "; cin >> Operacion;

                if (Operacion == 'n') 
                    Exit = true;
                else 
                    cout << "\n------------------------------------";
                
                break;

            case 4:
                Exit = true;
                break;
        }
    }
    cout << "\nHasta la próxima, " << Nombre << "\n";
    cout << "---------------------------------------------------------" << "\n";
    cout << "---------------------------------------------------------" << "\n";

    return 0;
}