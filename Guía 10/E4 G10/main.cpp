#include <iostream>
#include "funcion.h"

using namespace std;

int main(){
    char palabra[25];
    cout << "Ingrese solo una palabra: ";
    gets(palabra);
    int i = 0;
    i = valid(palabra);
    if(i == 1){
        invertir(palabra);
    }
    else{
        cout << endl << "Se ha detectado mas de una palabra" << endl;
    }
    return 0;
}
