#include <iostream>

using namespace std;

int main()
{
    cout << "Ejemplo de switch" << endl;
    int dia_semana = 0;
    cout << "Ingres el día de la semana" << endl;
    cin >> dia_semana;

    switch(dia_semana){
        case 1:
            cout << "Su día es Lunes" << endl;
            break;
        case 2:
            cout << "Su día es Martes" << endl;
            break;
        case 3:
            cout << "Su día es Miércoles" << endl;
            break;

        default:
            cout << "No hay día que mostrar ..." << endl;
            cout << "... ingrese un valor entre ..." << endl;
            cout << "1 y 7" << endl;
    }
    return 0;
}
