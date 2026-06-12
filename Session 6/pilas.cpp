#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> pila_nota;

    pila_nota.push(12);
    pila_nota.push(13);
    pila_nota.push(14);

    cout << "Tope " << pila_nota.top() << endl;
    // LIFO
    pila_nota.pop();
    cout << "Tope2 " << pila_nota.top() << endl;

    while (!pila_nota.empty())
    {
        cout << "Valor pila " << pila_nota.top() << endl;
        pila_nota.pop();
    }

    return 0;
}