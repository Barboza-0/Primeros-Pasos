#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vt[10], n;
    for(int x = 0; x < 10; x++){
        ingreso(n);
        vt[x] = n;
    }
    for(int x = 0; x < 10; x++){
        int r = vt[x], cont = 0;
        for(int y = 0; y < 10; y++){
            if(r == vt[y]){
                cont++;
            }
        }
        if(cont >= 2){
            cout << endl << "Repetido" << endl;
            break;
        }
    }
    return 0;
}
