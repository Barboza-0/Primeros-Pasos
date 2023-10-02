#include <iostream>
#include "funcion.h"

using namespace std;

int main(){
    char palabra[25], palabraMx[25];
    int i = 0, c = 0, mx = 0, z = 0, p = 0;
    cout << "Ingrese una palabra: ";
    gets(palabra);
    i = valid(palabra);
    z = zzz(palabra);
    if(i == 1){
        while(z == 1 && i == 1){
                i = 0;
                c = contenida(palabra);
                if(c > mx){
                    mx = c;
                    for(int x = 0; x < 25; x++){
                        palabraMx[x] = palabra[x];
                    }
                }
                cout << "Ingrese una palabra: ";
                gets(palabra);
                i = valid(palabra);
                z = zzz(palabra);
        }
    }
    else{
        cout << endl << "Se ha detectado mas de una palabra" << endl;
        p = 1;
    }
    if(p == 0){
        cout << endl << "La palabra con mayor cantidad de letras es " << palabraMx << " con " << mx << " letras" << endl;
    }
    return 0;
}
