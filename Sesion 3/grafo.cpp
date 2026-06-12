#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 4;

    vector<vector<int>> grafo(vertices);

    grafo[0].push_back(1);
    grafo[0].push_back(2);
    grafo[1].push_back(3);
    grafo[2].push_back(3);

    for (int i = 0; i < vertices; i++) {
        cout << "Nodo " << i << ": ";
        for (int vecino : grafo[i]) {
            cout << vecino << " ";
        }
        cout << endl;
    }

    return 0;
}