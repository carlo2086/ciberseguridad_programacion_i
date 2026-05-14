#include <iostream>

using namespace std;

int fibonacci(int n)
{
    /* Caso base */
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int numero;
    cout << "===> Ingrese el numero para calcular el fibonacci" << endl;
    cin >> numero;
    cout << "fibonacci del numero " << numero << " es" << fibonacci(numero) << endl;
    return 0;
}