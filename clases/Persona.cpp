#include <iostream>
#include <string>

using namespace std;

class Persona
{
    private :
        int id;
        string dni;
        string nombre;
        string apellidos;
        string telefono;
        int edad;
    public:
        int anio_nacimiento;

    /*Contructores*/
    Persona(){

    }
    Persona(string _nombre){
        this->nombre = _nombre;
    }
    /*Getter and Setter*/
    public:
        void settEdad(int _edad){
            this->edad =  _edad;
        }
        int gettEdad()
        {
            return this->edad;
        }
        void settNombre(string _nombre){
            this->nombre =  _nombre;
        }
        string gettNombre()
        {
            return this->nombre;
        }

    /*Funciones*/
    int calcular_edad(){
        this->edad = 2026 - this->anio_nacimiento;
        return this->edad;
    }
};

int main(){
    Persona estudiante = Persona("Juan");
    Persona docente = Persona();

    docente.settNombre("Carlos");

    cout<<"Nombre del docente es: "<<docente.gettNombre() <<endl;

    string nombre;
    cout<<"Ingrese el nombre de docente"<<endl;
    cin>> nombre;
    docente.settNombre(nombre);
    cout<<"Nombre del docente es: "<<docente.gettNombre() <<endl;

    docente.anio_nacimiento = 1990;
     cout<<"Edad del docente es: "<<docente.calcular_edad() <<endl;

     cout<< docente.gettEdad();
    return 0;
}