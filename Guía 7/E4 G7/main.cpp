#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int n, acu = 0, cont = 0, r, p;
    ingreso(n);
    while(n != 0){
        primo(n , r);
        if(r == 1){
            acu += n;
            cont++;
        }
        ingreso(n);
    }
    p = acu / cont;
    cout << endl << "El promedio es " << p << endl;
    return 0;
}
