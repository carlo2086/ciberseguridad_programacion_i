#include <iostream>
#include <string>

using namespace std;

int main()
{
    int datos[3] = {25, 45, 75};
    int *p = datos;
    int edad = 20;
    int *p2 = &edad;
    p = p + 4;
    cout << *p << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << p2 << endl;

    return 0;
}