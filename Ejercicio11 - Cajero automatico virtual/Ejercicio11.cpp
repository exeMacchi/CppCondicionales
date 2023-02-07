// 11. Realizar un programa que simule un cajero automatico con un saldo inicial de 1000 pesos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float saldo = 1000, Dinero;
    int Opcion;
    char Nombre[20], Operacion;
    bool Exit = false;

    cout << "Por favor, ingrese su nombre: "; cin.getline(Nombre, 20, '\n');
    cout << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "             Bienvenido a su cajero virtual, " << Nombre << endl;
    cout << endl;

    while (!Exit) {
        cout << "\n------------------------------------" << endl;
        cout << "1. Depositar dinero dentro de su cuenta." << endl;
        cout << "2. Retirar dinero de su cuenta." << endl;
        cout << "3. Consultar el balance de su cuenta." << endl;
        cout << "4. Salir." << endl;
        cout << "\nPor favor, seleccione una opcion: "; cin >> Opcion;

        if (Opcion > 4 || Opcion <= 0) {
            cout << "\nError: opcion no disponible." << endl;
            return 0;
        }

        cout << endl;

        switch (Opcion) {
            case 1:
                cout << "Cuanto dinero quiere depositar?: $"; cin >> Dinero;
                saldo += Dinero;

                cout << "\nSu nuevo balance: $" << saldo << endl;

                cout << "Quiere realizar alguna otra operacion? (Si = 'y' / No = 'n'): "; cin >> Operacion;
                if (Operacion == 'n') {
                    Exit = true;
                }
                else {
                    cout << "\n------------------------------------";
                }
                break;

            case 2:
                cout << "Cuanto dinero quiere retirar?: $"; cin >> Dinero;
                if ((saldo - Dinero) < 0) {
                    cout << "\nError: el retiro excede el balance disponible. Por favor, consulte su balance actual." 
                         << endl;
                }
                else {
                    saldo -= Dinero;
                    cout << "\nSu nuevo balance: $" << saldo << endl;
                    cout << "Quiere realizar alguna otra operacion? (Si = 'y' / No = 'n'): "; cin >> Operacion;
                    if (Operacion == 'n') {
                        Exit = true;
                    }
                    else {
                        cout << "\n------------------------------------";
                    }
                }
                break;

            case 3:
                cout << "Su balance actual: $" << saldo << endl;
                cout << "Quiere realizar alguna otra operacion? (Si = 'y' / No = 'n'): "; cin >> Operacion;
                if (Operacion == 'n') {
                    Exit = true;
                }
                else {
                    cout << "\n------------------------------------";
                }
                break;

            case 4:
                Exit = true;
                break;
            }
    }
    cout << "\nHasta la proxima, " << Nombre << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    return 0;
}
