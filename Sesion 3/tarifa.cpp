/**
 * Elabora un programa que solicite el tipo de cliente y aplique un descuento
 * sabiendo que :
 * normal 0%, Vip 20%, Premium 30%
 */

#include <iostream>

using namespace std;

int main()
{
    int tipo;
    float monto;

    cout << "Ingrese el tipo de cliente: 1 Normal, 2: Vip, 3: Premium ";
    cin >> tipo;
    cout << "Ingrese el monto total ";
    cin >> monto;
    switch (tipo)
    {
    case 1:
        cout << "El monto a pagar es: " << monto;
        break;
    case 2:
        cout << "El monto a pagar es: " << monto - monto * 0.20;
        break;
    case 3:
        cout << "El monto a pagar es: " << monto - monto * 0.30;
        break;
    default:
        break;
    }

    return 0;
}