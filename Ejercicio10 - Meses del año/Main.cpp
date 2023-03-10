// 10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
//     y mostrar el mes al que corresponde.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int Mes{};

    cout << "Ingrese un mes (1-12): "; cin >> Mes;
    if (Mes <= 0 || Mes > 12) 
    {
        cout << "\nError: número fuera de rango." << "\n";
        return 0;
    }

    switch (Mes) 
    {
        case 1:  cout  << "\nEnero"      << "\n"; break;
        case 2:  cout  << "\nFebrero"    << "\n"; break;
        case 3:  cout  << "\nMarzo"      << "\n"; break;
        case 4:  cout  << "\nAbril"      << "\n"; break;
        case 5:  cout  << "\nMayo"	     << "\n"; break;
        case 6:  cout  << "\nJunio"      << "\n"; break;
        case 7:  cout  << "\nJulio"      << "\n"; break;
        case 8:  cout  << "\nAgosto"     << "\n"; break;
        case 9:  cout  << "\nSeptiembre" << "\n"; break;
        case 10: cout  << "\nOctubre"    << "\n"; break;
        case 11: cout  << "\nNoviembre"  << "\n"; break;
        case 12: cout  << "\nDiciembre"  << "\n"; break;
    }

    return 0;
}