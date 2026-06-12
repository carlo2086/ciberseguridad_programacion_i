#include <iostream>

using namespace std;

void imprimir(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "el indice es: " << i << " el contenido es: " << array[i] << endl;
    }
}
void llenar_arreglo(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        array[i] = i * 2;
    }
}
void llenar_arreglo(int array[], int tamaño, int posicion, int valor)
{
    if (posicion < tamaño)
        array[posicion] = valor;
}

bool buscar(int array[], int tamaño, int valor)
{
    for (int i = 0; i < tamaño; i++)
    {
        /* code */
        if (array[i] = valor)
            return true;
        else
            return false;
    }
}

int main()
{
    int numeros[5] = {23, 12, 14, 16};

    /* calcular el tamaño del arreglo*/
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    imprimir(numeros, tamaño);
    cout << "<=====>" << endl;

    llenar_arreglo(numeros, tamaño);
    imprimir(numeros, tamaño);
    cout << "<=====>" << endl;

    llenar_arreglo(numeros, tamaño, 3, 2026);
    imprimir(numeros, tamaño);
    cout << "<=====>" << endl;

    cout << "busqueda del elemento: " << buscar(numeros, tamaño, 2026);
    return 0;
}