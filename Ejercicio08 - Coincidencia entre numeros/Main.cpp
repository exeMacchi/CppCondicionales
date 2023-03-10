// 8. Escribe un programa que lea de la entrada estándar tres números. 
//    Después debe leer un cuarto número e indicar si el número coincide con 
//    alguno de los introducidos con anterioridad.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N1{}, N2{}, N3{}, N4{};

    cout << "Ingrese el primer número: "; cin >> N1;
    cout << "Ingrese el segundo número: "; cin >> N2;
    cout << "Ingrese el tercer número: "; cin >> N3;
    cout << "Ingrese el cuarto número: "; cin >> N4;

    if (N4 == N1 || N4 == N2 || N4 == N3) 
        cout << "\nEl último número introducido coincide con al menos uno de " 
             << "los tres anteriormente introducidos." << "\n";
    else 
        cout << "\nTodos los números son diferentes." << "\n";

    return 0;
}