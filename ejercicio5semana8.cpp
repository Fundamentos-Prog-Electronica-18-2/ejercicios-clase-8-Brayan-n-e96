#include <iostream>
#include <string>
/*Crear un programa en c++ que permita ingresar por teclado nombres, apellidos y edad de una persona.
Si la edad es menor 10 se debe imprimir lo siguiente
Jose Andrade
con 7 años.
Pertenece al Básica
Si la edad es mayor o igual a 10 y menor 14 se debe imprimir lo siguiente
Jose Andrade
tiene 11 años.
Pertenece al Básica Superior
Si la edad es mayor o igual a 14 y menor o igual a 17 se debe imprimir lo siguiente
Jose Andrade tiene 16 años.
Pertenece al Bachillerato Unificado */
using  namespace  std;

int main(){
    string nombre;
    string apellido;
    int edad;
    cout<<"ingrese su nombre por favor "<<endl;
    cin>>nombre;
    cout<<"ingrese su apellido"<<endl;
    cin>>apellido;
    cout<<"ingrese su edad por favor"<<endl;
    cin>>edad;
    if(edad<=10){
        cout<<nombre<<" "<<apellido<<endl<<"con"
        <<endl<<edad<<endl
        <<"años"<<endl
        <<"pertenese a basica";
    }else{
        cout<<nombre<<" "<<apellido<<endl<<"con"
        <<endl<<edad<<endl
        <<"años"<<endl<<"pertenese a basica superior";
        if(edad>=14 & edad<=17){
            cout<<nombre<<" "<<apellido<<endl<<"con"
            <<endl<<edad<<endl<<"años"
            <<endl<<"pertenese a bachillerato unificado";
        }
    }
    return 0;
}

