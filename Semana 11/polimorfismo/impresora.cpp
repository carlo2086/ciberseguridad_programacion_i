#include <iostream>
#include <string>

using namespace std;

class Impresora
{
public:
    void imprimir(int i)
    {
        cout << "Entero " << i << endl;
    }
    void imprimir(double i)
    {
        cout << "Flotante " << i << endl;
    }
    void imprimir(string i)
    {
        cout << "Cadena " << i << endl;
    }
    void imprimir(int i, string d)
    {
        cout << "Entero " << i << " Cadena " << d << endl;
    }
};

int main()
{

    Impresora imp;
    imp.imprimir(14, "Jose");
    imp.imprimir(15.32);
    imp.imprimir("Hola");
    imp.imprimir(10);

    return 0;
}