/**
 * Elabora un programa que clasifique una persona por su edad
 * la condicion es la siguiente
 * 0 a 12 Niño
 * 13 a 17 Adolecente
 * 18 a 59 Adulto
 * 60+ Adulto mayot
 */

#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingrese la edad de la persona: 24";
    cin >> edad;
    if (edad < 0 && edad <= 12)
    {
        cout << "Niño";
    }
    else if (edad <= 17)
    {
        cout << "Adocelecente";
    }
    else if (edad <= 59)
    {
        cout << "Adulto";
    }
    else
    {
        cout << "Adulto Mayor";
    }

    return 0;
}