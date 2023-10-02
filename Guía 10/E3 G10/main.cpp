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
        cout << endl << "Valida" << endl;
    }
    else{
        cout << endl << "No es valida" << endl;
    }
    return 0;
}
