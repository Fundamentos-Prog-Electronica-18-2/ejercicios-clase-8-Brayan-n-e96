#include <iostream>
/*(usar condicionales y ciclos repetitivos while )
Crear un programa en c++ que permita lo siguiente:
Ingresar un n�mero para operar
Ingresar un n�mero para el l�mite
Si el usuario ingresa una opcion 1
se debe presentar la tabla de multiplicar Ejemplo:
10 * 1 = 10
... hasta
10 * limite
Si el usuario ingresa una opcion 2
se debe presentar la tabla de sumar Ejemplo:
10 + 1 = 10
... hasta
10 + limite
Cualquier otra opci�n ingresada, se debe presentar "opci�n incorrecta"*/
using namespace std;

int main()
{
    int numero;
    int limite = 0;
    int contador = 1;
    int operacion = 0;
    int caso;
    cout << "ingrese un numero " << endl;
    cin>> numero;
    cout<< "�ngrese el limite "<<endl;
    cin>>limite;
    cout<< "�ngrese un caso "<<endl;
    cin>>caso;
    if (caso==1)
        while(contador <= limite){
            operacion = numero * contador;
            cout << numero <<" * " <<contador <<" = " << operacion << endl;

            contador = contador + 1;



    }else {
        if (caso==2){
               while (contador <= limite){

                operacion = numero + contador;
            cout << numero <<" + " <<contador <<" = " << operacion << endl;

            contador = contador + 1;
               }


        }else{
        cout<<"�pcion incorrecta"<<endl;
        }
        }



    return 0;
}

