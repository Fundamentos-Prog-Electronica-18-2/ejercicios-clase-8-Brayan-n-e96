#include <iostream>
/*(usar condicionales y ciclos repetitivos while )
Crear un programa en c++ que permita lo siguiente:
Ingresar un número para operar
Ingresar un número para el límite
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
Cualquier otra opción ingresada, se debe presentar "opción incorrecta"*/
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
    cout<< "ïngrese el limite "<<endl;
    cin>>limite;
    cout<< "ïngrese un caso "<<endl;
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
        cout<<"öpcion incorrecta"<<endl;
        }
        }



    return 0;
}

