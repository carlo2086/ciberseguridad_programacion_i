#include <iostream>
#include <string>

using namespace std;

int main()
{

    int edad = 20;

    cout << "El valor de la variable edad es: " << edad << endl;
    cout << "La direccion de la variable edad es: " << &edad << endl;

    int *puntero = &edad;

    *puntero = 50;
  
    cout << "El valor de la variable edad es: " << *puntero << endl;
    cout << "La direccion de la variable edad es: " << puntero << endl;

    /**
     - & operador para mostrar la direccion de la memoria
     - * operador para declara una variable de tipo puntero
     - puntero guarda la direccion de la memoria
     - *puntero apunta al valor almacenada 
     */
    return 0;


}