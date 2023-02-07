// 8. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar
//    si el número coincide con alguno de los introducidos con anterioridad.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N1, N2, N3, N4;

    cout << "Ingrese el primer numero: "; cin >> N1;
    cout << "Ingrese el segundo numero: "; cin >> N2;
    cout << "Ingrese el tercer numero: "; cin >> N3;
    cout << "Ingrese el cuarto numero: "; cin >> N4;

    if (N4 == N1 || N4 == N2 || N4 == N3) {
        cout << "\nEl ultimo numero introducido coincide con al menos uno de los tres anteriormente introducidos." << endl;
    }
    else {
        cout << "\nTodos los numeros son diferentes." << endl;
    }
    return 0;
}
