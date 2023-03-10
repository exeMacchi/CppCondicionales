/*
    9. Cambiar un número entero con el mismo valor pero en romanos.
          • M = 1000
          • D = 500
          • C = 100
          • L = 50
          • X = 10
          • I = 1
*/       

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");
    
    int N{}, Unidad{}, Decena{}, Centena{}, Millar{};

    cout << "Ingrese un número (1 a 3999): "; cin >> N;

    if (N <= 0 || N > 3999) 
    {
        cout << "\nError: número fuera de rango." << "\n";
        return 0;
    }

    Unidad = N % 10;
    N /= 10;
    Decena = N % 10;
    N /= 10;
    Centena = N % 10;
    N /= 10;
    Millar = N % 10;
    N /= 10;

    cout << "\n";

    switch (Millar) 
    {
        case 1: cout << "M"; break;
        case 2: cout << "MM"; break;
        case 3: cout << "MMM"; break;
    }

    switch (Centena) 
    {
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;
    }

    switch (Decena) 
    {
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;
    }

    switch (Unidad) 
    {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
    }

    cout << "\n";
    return 0;
}