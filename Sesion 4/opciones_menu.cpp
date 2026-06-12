#include <iostream>

using namespace std;

int main(){

    int opciones = 0;
    do{

        cout<<"========Opciones==========\n";
        cout<<"Ingrese las opciones \n";
        cout<<"1. Suma \n";
        cout<<"2. Restar \n";
        cout<<"3. Multiplicar \n";
        cout<<"4. Dividir \n";
        cout<<"5. Salir \n";
        cin>>opciones;
    } while(opciones !=5);
    return 0;
}