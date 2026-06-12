#include <iostream>
using namespace std;

int main() {
    int edad = 25;                 // variable
    const double PI = 3.1416;      // constante
    bool esMayor = true;           // tipo lógico
    char inicial = 'C';            // carácter
    string nombre = "Carlos";      // cadena

    if(edad<18){
        cout<< nombre << " es menor de edad" <<"\n";
    }
    else{
        cout<< nombre << " es mayor de edad \n";
    }

    cout << " \t"<< nombre << " tiene " << edad << " años." << endl;

    return 0;
}