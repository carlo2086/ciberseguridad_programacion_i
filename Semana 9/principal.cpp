#include <string>
#include <iostream>
#include "Persona.cpp"

using namespace std;

int main()
{
    Persona estudiante = Persona();

    Persona estudiante2 = Persona("123456", "Jose", "Rodriguez", "Poma");

    estudiante.set_dni("123");
    estudiante.set_nombre("Luis");
    estudiante.set_paterno("Julca");
    estudiante.set_materno("Rodriguez");

    estudiante.saludar();
    estudiante2.saludar();

    cout << "Holq: " << estudiante.get_dni() << " " << estudiante2.get_nombre() << endl;

    Persona estudiates[5];

    return 0;
}