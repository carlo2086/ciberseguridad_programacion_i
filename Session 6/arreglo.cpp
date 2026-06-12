#include <iostream>
using namespace std;

void imprimir(int arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        /* code */
        cout << "El valor del indice " << i << " es :" << arreglo[i] << endl;
    }
}
void imprimir(float arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        /* code */
        cout << "El valor del indice " << i << " es :" << arreglo[i] << endl;
    }
}

void modificar_arreglo(int arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        /* code */
        arreglo[i] = i * 2 + 24;
    }
}

template <size_t FILAS, size_t COLUMNAS>
void recorrer_matriz(int (&matriz)[FILAS][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        /* code */
        for (int j = 0; j < COLUMNAS; j++)
        {
            /* code */
            cout << " el valor de la matriz[" << i << "][" << j << "] es: " << matriz[i][j] << endl;
        }
    }
}
int main()
{
    /*
        int numeros[5];
        float valores[] = {3.5, 4.6, 8.8};
        string nombre[3] = {"Juana", "Marcela", "Maria"};
        int tamaño1 = sizeof(numeros) / sizeof(numeros[0]);
        int tamaño2 = sizeof(valores) / sizeof(valores[0]);
        cout << "Indice 4 " << numeros[4] << " " << endl;
        numeros[4] = 2026;
        cout << "Indice 4 " << numeros[4] << " " << endl;

        // sobrecarga de funciones u overloading
        imprimir(numeros, tamaño1);
        cout << "====>" << endl;
        imprimir(valores, tamaño2);
        cout << "====>" << endl;
        modificar_arreglo(numeros, tamaño1);
        imprimir(numeros, tamaño1);
    */
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << matriz[2][2];
    recorrer_matriz(matriz);
    return 0;
}