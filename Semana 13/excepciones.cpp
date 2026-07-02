#include <iostream>
#include <string>

using namespace std;

int main()
{
    int divisor, dividendo;
    float resultado;
    /*
        cout << "Ingrese el numero a dividir" << endl;
        cin >> divisor;

        cout << "ingrese el dividendo" << endl;
        cin >> dividendo;

        try
        {
            if (dividendo == 0)
            {
                throw "No se puede dividir entre cero";
            }
            resultado = divisor / dividendo;
        }
        catch (const char *mensaje)
        {
            cout << mensaje << endl;
        }

        cout << "El resultado es: " << resultado << endl;
    */
    try
    {
        throw "10";
    }
    catch (int x)
    {
        cout << "Excepcion de numero entero" << endl;
    }
    catch (char c)
    {
        cout << "Excepcion de tipo char" << endl;
    }
    catch (...)
    {
        cout << "Excepcion desconocida" << endl;
    }

    int opcion;
    cout << "1. Error entero" << endl;
    cout << "2. Error decimal" << endl;
    cout << "3. Otro error" << endl;
    cin >> opcion;
    try
    {
        if (opcion == 1)
        {
            throw 10;
        }
        if (opcion == 2)
        {
            throw 4.36;
        }
        throw "Error desconocido";
    }
    catch (int n)
    {
        cout << "Error de tipo entero: " << n << endl;
    }
    catch (double d)
    {
        cout << "Error de tipo decimal: " << d << endl;
    }
    catch (const char *n)
    {
        cout << n << endl;
    }
    catch(...){
        cout<<"Error desconcido"<<endl;
    }

    return 0;
}