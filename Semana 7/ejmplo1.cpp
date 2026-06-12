#include <iostream>
#include <string>

using namespace std;

int main()
{

    int numero;

    cout << "ingrese el valor de un numero";
    cin >> numero;

    cout << "El valor de numero es: " << numero << endl;
    cout << "La direccion de numero es " << &numero << endl;
    int *p = &numero;
    p++;
    cout << "el valor por el puntero es :" << p << endl;

    cout << "la direccion por el puntero es " << *p << endl;
    return 0;
}