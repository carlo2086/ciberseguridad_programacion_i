#include <iostream>
#include <string>
#include "Curso.cpp"

using namespace std;

void opciones_menu()
{
    cout << "============================" << endl;
    cout << "======Sistema Academico=====" << endl;
    cout << "1. Registrar curso" << endl;
    cout << "2. Registrar docente" << endl;
    cout << "3. Registrar alumno" << endl;
    cout << "4. Motrar alumnos" << endl;
    cout << "5. Eliminar alumno" << endl;
    cout << "6. Mostrar curso" << endl;
    cout << "7. Guardar en archivo" << endl;

    cout << "8. Salir" << endl;
    cout << "============================" << endl;
}

int main()
{
    int opciones;
    Curso curso;
    do
    {
        opciones_menu();
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            curso.registrar_curso();
            break;
        case 2:
            curso.agregar_docente();
            break;
        case 3:
            curso.agregar_alumno();
            break;
        case 4:
            curso.listar_alumnos();
            break;
        case 5:
            curso.eliminar_alumno();
            break;
        case 6:
            curso.imprimir();
            break;
        case 7:
            curso.guardar_archivo("Curso.txt");
            break;
        case 8:
            cout << "Gracias por usar el sistema...BYE" << endl;
            break;
        default:
            break;
        }
    } while (opciones != 8);

    return 0;
}
