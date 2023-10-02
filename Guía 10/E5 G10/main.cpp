#include <iostream>
#include "funcion.h"

using namespace std;

int main()
{
    char palabra[25];
    int i = 0, a = 0;
    cout << "ingrese una palabra: ";
    gets(palabra);
    a = valid(palabra);
    i = contenida(palabra);
    if(a == 0){
        cout << endl << "se ha detectado mas de una palabra" << endl;
    }
    else{
        if(i == 0){
            cout << endl << "No hay palabra contenida en la cadena" << endl;
        }
        else{
            cout << endl << "La palabra contenida es " << palabra << endl;
        }
    }
    return 0;
}
