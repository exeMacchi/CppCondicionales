// 8. Escribe un programa que lea de la entrada est�ndar tres n�meros. 
//    Despu�s debe leer un cuarto n�mero e indicar si el n�mero coincide con 
//    alguno de los introducidos con anterioridad.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N1{}, N2{}, N3{}, N4{};

    cout << "Ingrese el primer n�mero: "; cin >> N1;
    cout << "Ingrese el segundo n�mero: "; cin >> N2;
    cout << "Ingrese el tercer n�mero: "; cin >> N3;
    cout << "Ingrese el cuarto n�mero: "; cin >> N4;

    if (N4 == N1 || N4 == N2 || N4 == N3) 
        cout << "\nEl �ltimo n�mero introducido coincide con al menos uno de " 
             << "los tres anteriormente introducidos." << "\n";
    else 
        cout << "\nTodos los n�meros son diferentes." << "\n";

    return 0;
}