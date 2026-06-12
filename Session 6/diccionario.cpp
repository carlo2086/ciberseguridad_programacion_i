#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> edades;

    edades["Ana"] = 25;
    edades["Maria"] = 35;
    edades["Josefa"] = 20;

    cout << "La edad de Josefa es: " << edades["Josefa"] << endl;

    cout << "La edad de Carlos es: " << edades["Carlos"] << endl;

    edades.insert({"Pedro", 15});
    edades.insert({"Analucia", 18});


    for (auto &[nombre, edad] : edades)
    {
        /* code */
        cout << nombre << ": " << edad << endl;
    }
    if (edades.find("Luis") != edades.end())
    {
        cout << "Luis existe en el diccionario" << endl;
    }
    else
    {
        cout << "Luis no existe" << endl;
    }

    return 0;
}