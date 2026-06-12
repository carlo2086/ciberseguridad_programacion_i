#include <iostream>
#include <string>
#include "Persona.cpp"
#include <fstream>

using namespace std;

class Curso
{
private:
    int id;
    string nombre;
    int credito;
    Persona docente;
    Persona estudiantes[5];
    int total_alumnos = 0;

public:
    Curso() {}
    Curso(int _id, string _nombre, int _credito)
    {
        this->id = _id;
        this->nombre = _nombre;
        this->credito = _credito;
    }
    /*getter and setter*/
    int get_id()
    {
        return this->id;
    }
    void set_id(int _id)
    {
        this->id = _id;
    }
    string get_nombre()
    {
        return this->nombre;
    }
    void set_nombre(string _nombre)
    {
        this->nombre = _nombre;
    }
    int get_credito()
    {
        return this->credito;
    }
    void set_credito(int _credito)
    {
        this->credito = _credito;
    }
    /*metodos*/
    void registrar_curso()
    {
        int _id, _credito;
        string _nombre;
        cout << "Ingrese el identificador del curso" << endl;
        cin >> _id;
        cout << "Ingrese el nombre curso" << endl;
        cin >> _nombre;
        cout << "Ingrese los creditos" << endl;
        cin >> _credito;
        this->set_id(_id);
        this->set_nombre(_nombre);
        this->set_credito(_credito);
    }
    void agregar_docente()
    {
        string _dni, _nombre, _apPaterno, apMaterno;
        cout << "Ingrese el dni del docente" << endl;
        cin >> _dni;
        cout << "Ingrese el nombre del docente" << endl;
        cin >> _nombre;
        cout << "Ingrese el apellido paterno del docente" << endl;
        cin >> _apPaterno;
        cout << "Ingrese el apellido materno del docente" << endl;
        cin >> apMaterno;
        this->docente = Persona(_dni, _nombre, _apPaterno, apMaterno);
    }
    void agregar_alumno()
    {
        if (total_alumnos < 5)
        {
            string _dni, _nombre, _apPaterno, apMaterno;
            cout << "Ingrese el dni del alumno" << endl;
            cin >> _dni;
            cout << "Ingrese el nombre del alumno" << endl;
            cin >> _nombre;
            cout << "Ingrese el apellido paterno del alumno" << endl;
            cin >> _apPaterno;
            cout << "Ingrese el apellido materno del alumno" << endl;
            cin >> apMaterno;
            Persona alumno = Persona(_dni, _nombre, _apPaterno, apMaterno);
            estudiantes[total_alumnos] = alumno;
            total_alumnos++;
        }
        else
        {
            cout << "No hay capacidad para registrar mas alumnos";
        }
    }
    void listar_alumnos()
    {
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[i].get_dni() != "")
            {
                estudiantes[i].saludar();
            }
        }
    }
    void eliminar_alumno()
    {
        int _idEliminar;
        cout << "Ingrese el id del alumno a eliminar" << endl;
        cin >> _idEliminar;
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[i].get_id() == _idEliminar)
            {
                estudiantes[i] = Persona();
            }
        }
    }
    void imprimir()
    {
        cout << "===========================" << endl;
        cout << "Nombre del curso: " << this->nombre << endl;
        cout << "Creditos: " << this->credito << endl;
        cout << "Docente del curso " << this->docente.get_nombre() << " " << this->docente.get_paterno() << " " << this->docente.get_materno() << endl;
        cout << "========Alumnos=========" << endl;
        this->listar_alumnos();
        cout << "========================";
    }

    void guardar_archivo(string _nombre_archivo)
    {
        ofstream archivo(_nombre_archivo);
        if (!archivo.is_open())
        {
            cerr << "Error al abrir el archivo para guardar." << endl;
            return;
        }
        // Guardar nombre del curso
        archivo << "=========Nombre del Curso===========" << endl;
        archivo << this->nombre << endl;
        // Guardar cantidad de estudiantes
        archivo << "=========Nombre del Docente===========" << endl;
        archivo << this->docente.imprimir() << endl;
        archivo << "=========Total de matriculados===========" << endl;
        archivo << this->total_alumnos << endl;
        // Guardar cada estudiante
        for (Persona est : estudiantes)
        {
            archivo << est.get_nombre();
            archivo << est.get_paterno();
            archivo << est.get_materno();
            archivo << endl;
        }
        archivo.close();
        cout << "Datos guardados en " << _nombre_archivo << endl;
    }
};