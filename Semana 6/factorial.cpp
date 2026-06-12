#include <iostream>

using namespace std;

int factorial(int n)
{
    /**Caso base */
    if (n == 0 || n == 1)
    {
        return 1;
    }
    /*Caso recursivo */
    return n * factorial(n - 1);
}

int suma(int n)
{
    /* Caso base*/
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n + suma(n - 1);
}

int main()
{
    int numero;
    cout << "===> Ingrese el numero para calcular el factorial" << endl;
    cin >> numero;

    cout << "El factorial del numero : " << numero << " es: " << factorial(numero);
    cout << endl;
    cout << "La suma de los primeros " << numero << " es: " << suma(numero);
    return 0;
}