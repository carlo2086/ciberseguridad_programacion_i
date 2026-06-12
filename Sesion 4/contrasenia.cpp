#include <iostream>
#include <string>
using namespace std;

int main()
{

    string clave = "123456";
    string clave2;
    bool validacion = false;

    do
    {
        cout << "Ingrese la contraseña: \n";
        cin >> clave2;
        if (clave2 == clave)
        {
            validacion = true;
            cout<<"Contraseña correcta"<<endl<<validacion<<"\n";
        }
        else{
            cout<<"Clave incorrecta "<<endl<<validacion<<"\n";
        }

    } while (validacion = 0);
   
  return 0;
}