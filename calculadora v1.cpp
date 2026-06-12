#include <iostream>
using namespace std;

int result = 0; //--global

int main()
{
    int numero_1 = 12;
    int numero_2 = 0;
    int resultado; //-- local
    cout << "Ingrese el valor para el numero 1 \t";
    cin >> numero_1;
    cout << "Ingrese el valor para el numero 2 \t";
    cin >> numero_2;

    cout << "la suma es: ";
    cout << numero_1 + numero_2;
    cout << "\n";
    cout << "la resta es: ";
    cout << numero_1 - numero_2;
    cout << "\n";

    cout << "la multiplicacion es: ";
    cout << numero_1 * numero_2;
    cout << "\n";
    if (numero_2 == 0)
    {
        cout << "valor equivocado para el divisor";
    }
    else
    {
        cout << "la division es: ";
        cout << numero_1 / numero_2;
        cout << "\n";
    }
    return 0;
}