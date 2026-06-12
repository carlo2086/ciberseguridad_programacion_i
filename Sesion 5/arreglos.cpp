#include <iostream>

using namespace std;

int main()
{
    int calificaciones_1[10];
    calificaciones_1[1] = 15;

    int nota = calificaciones_1[1];

    double notas1[3] = {13.5, 12.4, 11.34};

    double notas2[5] = {0};

    float notas3[5] = {12.45, 13.23, 14.45};
    for (int i = 0; i < 5; i++)
    {
        cout << notas3[i] << endl;
    }

    int calificaciones_2[5]; // = {12, 14, 15};
    int tamaño = sizeof(calificaciones_2) / sizeof(calificaciones_2[0]);
    for (int i = 0; i < tamaño; i++)
    {
        cout << "Ingrese la nota " << i << endl;
        cin >> calificaciones_2[i];
    }
    int suma = 0;
    for (int i = 0; i < tamaño; i++)
    {
        suma = suma + calificaciones_2[1];
        cout << "la nota es: " << calificaciones_2[i] << endl;
    }
    cout << suma;
    double temperatura[5];

    char letras[5];

    return 0;
}