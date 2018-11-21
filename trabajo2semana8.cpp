#include <iostream>
using  namespace  std;

int main(){
    /*
     * a <> 0se realiza x = -b / a;
     * a = 0 b <> 0 se imprime de "solución imposible";
     * a = 0 b = 0 se imprime "solución indeterminada";
    */
    double a;
    double b;
    double resultado = 0 ;
    cout << " Resolución de una ecuación de primer grado " << endl;

    cout << " Ingrese un valor para la variable a " << endl;
    cin >> a;
    cout << " Ingrese un valor para la variable b " << endl;
    cin >> b;

    cout << " El proceso " << endl;
    cout << " a: " << a << " b: " << b << endl;

    if(a!= 0 ) {
        resultado = -b / a;
        cout << "El resultado es :" << resultado << endl;
    }else{
        if(b!=0){
            cout << "solución imposible"<< endl;
        }else{
            cout << "solución indeterminda"<< endl;
        }
    }

    return 0;
}
