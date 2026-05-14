#include <iostream>
#include <string>

using namespace std;

string invertir(string cadena)
{
    /* Caso base*/
    if (cadena.length() <= 1)
    {
        return cadena;
    }
    /*Caso recursivo*/
    return invertir(cadena.substr(1)) + cadena[0];
}

int main()
{
    string cadena;

    cout << "==> ingrese la cadena a invertir: " << endl;
    cin >> cadena;

    cout << "==> la cadena invertida es: " << invertir(cadena);
    return 0;
}