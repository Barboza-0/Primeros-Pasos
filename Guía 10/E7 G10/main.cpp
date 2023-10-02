#include <iostream>
#include "funcion.h"

using namespace std;

int main(){
    char palabra[25];
    int c = 0, i = 0, n = 0;
    cout << "Ingrese una palabra: ";
    gets(palabra);
    i = valid(palabra);
    if(i == 1){
        n = contenida(palabra);
        if(n == 1){
            c = contador(palabra);
            cout << endl << "La palabra " << palabra << " tiene " << c << " letras " << endl;
        }
        else{
            cout << endl << "No se ha ingresado una palabra" << endl;
        }
    }
    else{
        cout << endl << "Se ha detectado mas de una palabra" << endl;
    }
    return 0;
}
