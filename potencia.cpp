#include <iostream>

using namespace std;

int potencia(int base, int exponente)
{
    /* Caso base */
    if (exponente == 0)
        return 0;
    if (exponente == 1)
        return base;
    return base * potencia(base, exponente - 1);
}

int main()
{
    int numero, exponente;
    cout << "===> Ingrese la base" << endl;
    cin >> numero;
    cout << "===> Ingrese el exponente" << endl;
    cin >> exponente;
    cout << "la potencia del numero " << numero << " a la potencia "
         << exponente << " es ==> " << potencia(numero, exponente) << endl;
    return 0;
}