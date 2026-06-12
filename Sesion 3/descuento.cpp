/**
 * Elabora un programa que devuelva el total de la compra con el decuento
 * si se sabe que
 * total compra > 100 descuento 1%, >200 descuento 2%, > 500 descuento 5%
 */

#include <iostream>

using namespace std;

int main()
{
    float total_compra;

    cout << "Ingrese el valor toral de la compra: ";
    cin >> total_compra;

    if (total_compra >= 100 && total_compra < 200)
    {
        total_compra = total_compra - total_compra * 0.01;
    }

    else if (total_compra >= 200 && total_compra < 500)
    {
        total_compra = total_compra - total_compra * 0.02;
    }

    else if (total_compra >= 500)
    {
        total_compra = total_compra - total_compra * 0.05;
    }
    cout << total_compra;
    return 0;
}