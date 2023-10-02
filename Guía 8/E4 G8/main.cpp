#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vt[10], n, b = 0, mx = vt[0];
    for(int x = 0; x < 10; x++){
        ingreso(n);
        vt[x] = n;
    }
    for(int x = 0; x < 10; x++){
        if(vt[x] >= mx){
            mx = vt[x];
        }
        else{
            b = 1;
        }
    }
    if(!b){
        cout << endl << "Creciente" << endl;
    }
    else{
        cout << endl << "Desordenado" << endl;
    }
    return 0;
}
