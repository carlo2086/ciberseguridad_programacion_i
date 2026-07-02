#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class Figura
{
public:
    virtual void dibujar() const
    {
        cout << "Dibujando una figura generica..." << endl;
    }

    virtual double area() const = 0;

    // virtual -Figura() = default;
};

class Circulo : public Figura
{
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}
    void dibujar() const override
    {
        cout << "Dibujando circulo de radio " << radio << endl;
    }

    double area() const override
    {
        return 3.14156 * radio * radio;
    }
};

class Rectangulo : public Figura
{
private:
    double ancho, alto;

public:
    Rectangulo(double base, double alt) : ancho(base), alto(alt)
    {
    }
    void dibujar() const override
    {
        cout << "Dibujando rectangulo de " << ancho << " de ancho, de " << alto << " de alto" << endl;
    }

    double area() const override
    {
        return ancho * alto;
    }
};

int main()
{
    vector<unique_ptr<Figura>> figuras;
    figuras.push_back(make_unique<Circulo>(5.0));
    figuras.push_back(make_unique<Rectangulo>(4.0, 6.0));

    for (const auto &f : figuras)
    {
        f->dibujar();
    }
    return 0;
}