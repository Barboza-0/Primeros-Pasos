#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vt[50], n, acu = 0;
    for(int x = 0; x < 50; x++){
        ingreso(n);
        vt[x] = n;
    }
    for(int x = 0; x < 50; x++){
        acu += vt[x];
    }
    cout << endl << "La suma de los 50 numeros es de " << acu << endl;
    return 0;
}
