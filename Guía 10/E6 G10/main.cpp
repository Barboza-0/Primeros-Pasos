#include <iostream>
#include "funcion.h"

using namespace std;

int main()
{
    char palabra[25], letra;
    int i = 0, c = 0, ct = 0;
    cout << "Ingrese una palabra: ";
    gets(palabra);
    ct = contenida(palabra);
    if(ct == 1){
        i = valid(palabra);
        if(i == 1){
            cout << "Ingrese una letra para contar en la palabra antes ingresada: ";
            cin.get(letra);
            c = contadorLetras(palabra, letra);
            cout << endl << "Hay " << c << " letra(s) " << letra << "(s)" << " en la palabra " << palabra << endl;
        }
        else{
            cout << endl << "Se ha detectado mas de una palabra" << endl;
        }
    }
    else{
        cout << endl << "No se ha ingresado una palabra" << endl;
    }
    return 0;
}
