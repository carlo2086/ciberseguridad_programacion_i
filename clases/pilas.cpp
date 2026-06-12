#include <iostream>
#include <stack>

// #include<Persona.cpp>;
using namespace std;

int main()
{

    stack<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(5);

    cout << "Elemento superior" << endl;
    cout << pila.top() << endl;

    pila.pop();

    cout << "El nuevo elemento superior" << endl;
    cout << pila.top() << endl;

    return 0;
}