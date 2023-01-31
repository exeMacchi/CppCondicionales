// 10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Mes;

    cout << "Ingrese un mes (1-12): "; cin >> Mes;

    if (Mes <= 0 || Mes > 12) {
        cout << "\nError: numero fuera de rango." << endl;
        return 0;
    }

    switch (Mes) {
        case 1: cout << "\nEnero" << endl; break;
        case 2: cout << "\nFebrero" << endl; break;
        case 3: cout << "\nMarzo" << endl; break;
        case 4: cout << "\nAbril" << endl; break;
        case 5: cout << "\nMayo" << endl; break;
        case 6: cout << "\nJunio" << endl; break;
        case 7: cout << "\nJulio" << endl; break;
        case 8: cout << "\nAgosto" << endl; break;
        case 9: cout << "\nSeptiembre" << endl; break;
        case 10: cout << "\nOctubre" << endl; break;
        case 11: cout << "\nNoviembre" << endl; break;
        case 12: cout << "\nDiciembre" << endl; break;
    }
    return 0;
}
