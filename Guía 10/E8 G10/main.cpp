#include <iostream>
#include "funcion.h"

using namespace std;

int main(){
    char palabra[25], palabraI[25], palabraII[25];
    int c = 0;
    for(int x = 0; x < 2; x++){
        int i = 0;
        if(x == 0){
            cout << "Ingrese una palabra: ";
            gets(palabraI);
            i = valid(palabraI);
        }
        else{
            cout << "Ingrese otra palabra: ";
            gets(palabraII);
            i = valid(palabraII);
        }
        if(x == 1){
            if(i == 1){
                c = cadenaIgual(palabraI, palabraII);
            }
            else{
                cout << endl << "Se ha detectado mas de una palabra" << endl;
                break;
            }
        }
    }
    if(c == 1){
        cout << endl << "Las palabras son iguales" << endl;
    }
    else{
        cout << endl << "Las palabras son distintas" << endl;
    }
    return 0;
}
