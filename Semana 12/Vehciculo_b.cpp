#include <iostream>
#include <string>

using namespace std;

class Vehiculo
{
private:
    float _velocidad;

public:
    Vehiculo(float _velociad)
    {
        this->_velocidad = _velociad;
    }
    virtual void get_velocidad(float _velodidad) = 0;
};

class Moto : public Vehiculo
{
public:
    Moto(float _velocidad) : Vehiculo(_velocidad) {}
    void get_velocidad(float _velodidad)
    {
        cout << "velocidad de la moto es " << _velodidad << " Km/h" << endl;
    }
};

class Carro : public Vehiculo
{
public:
    Carro(float _velocidad) : Vehiculo(_velocidad) {}
    void get_velocidad(float _velodidad)
    {
        cout << "velocidad del carro es " << _velodidad << " Km/h" << endl;
    }
};

class InterfaceImpresora
{
public:
    virtual void mensaje() = 0;
    virtual void mensaje2(string mensaje) = 0;
    /*
    guardar;
    listar:
    eliminar;
    busqueda_codigo;
    modificar;
    */
};

class ImplementImpresora : public InterfaceImpresora
{
public:
    void mensaje()
    {
        cout << "Mensaje del sistema" << endl;
    }
    void mensaje2(string _mensaje)
    {
        cout << "Mensaje personalizado " << _mensaje << endl;
    }
};

int main()
{
    Moto _moto = Moto(45);
    Carro _carro = Carro(25);

    _moto.get_velocidad(54.67);
    _carro.get_velocidad(89.45);

    ImplementImpresora impre;
    impre.mensaje2("Hola");
    impre.mensaje();

    return 0;
}