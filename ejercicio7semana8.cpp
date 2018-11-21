#include <iostream>
/*Crear un programa en c++ que permita lo siguiente:
Ingresar 3 valores por teclado a, b, c; luego el usuario ingresa una opcion
Si es la opción 1: realizar la suma de los valores ingresados
Si es la opción 2: realizar el producto de los valores ingresados*/
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int opcion =0;

    cout << "ingrese el valor de a"<< endl;
    cin>>a;
    cout << "ingrese el valor de b"<< endl;
    cin>>b;
    cout << "ingrese el valor de c"<< endl;
    cin>>c;
    cout << "ingrese la opcion 1 para suma y opcion 2 para producto"<< endl;
    cin>>opcion;
    int suma=0;
    int producto=0;
    switch(opcion<=2 & opcion<=1){
        case 1:
            producto= a*b*c;
            cout << "la suma es" <<producto<< endl;

        default:
            suma=a+b+c;
            cout << "el producto es " <<suma<< endl;

    }
    return 0;
}
