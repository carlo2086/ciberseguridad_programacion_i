/**
 * Elabora un programa que realice la sumatoria de numeros pares e impares del 1 al 100
 */

#include <iostream>

using namespace std;

int main()
{
    int par = 0, impar = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            par = par + i;
        }
        else
        {
            impar = impar + i;
        }
    }

    cout << "La sumatoria de numeros pares del 1 al 100 es: " << par << endl;
    cout << "La sumatoria de numeors impares del 1 al 100 es: " << impar;
    return 0;
}