#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int cont = 0, n, r;
    for(int x = 0; x < 20; x++){
        ingreso(n);
        par(n, r);
        if(r == 1){
            cont++;
        }
    }
    cout << endl << "Hay " << cont << " numeros pares" << endl;
    return 0;
}
