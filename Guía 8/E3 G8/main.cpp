#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vt[100], n, acu = 0, r;
    for(int x = 0; x < 100; x++){
        ingreso(n);
        vt[x] = n;
    }
    for(int x = 0; x < 100; x++){
        acu += vt[x];
    }
    r = acu / 100;
    for(int x = 0; x < 100; x++){
        if(vt[x] > r){
            cout << vt[x] << endl;
        }
    }
    return 0;
}
