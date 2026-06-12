#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
/* comentarios la logica de ustedes*/
    tuple<int, string, double> estudiante;

    estudiante = make_tuple(1, "Pedro", 14);

    tuple<int, string, double> estudiante2(2, "Carlos", 15.4);

    cout << get<0>(estudiante) << endl;

    cout << get<0>(estudiante2) << endl;

    cout << get<1>(estudiante) << endl;

    get<0>(estudiante) = 24;
    cout << get<0>(estudiante) << endl;

    return 0;
}