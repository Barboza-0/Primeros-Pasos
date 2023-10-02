#include <iostream>

using namespace std;

void copia(char palabra[], char palabraI[]){
    cout << "ingrese una palabra: ";
    gets(palabra);
    cout << "Ingrese otra palabra: ";
    gets(palabraI);
    for(int x = 0; x < 25; x++){
        palabra[x] = palabraI[x];
    }
    cout << endl << palabra << endl;
}
