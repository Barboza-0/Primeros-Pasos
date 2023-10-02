#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int n, m, p, mp = 0, cim = 0, mnp = 0, b = 0;
    ingreso(n);
    while(n != 0){
        mayor(n, m);
        if(m == 1){
            if(n > mp){
                mp = n;
            }
        }
        else{
            cim++;
        }
        primo(n, p);
        if(p == 1){
            if(!b){
                mnp = n;
                b = 1;
            }
            else{
                if(n < mnp){
                    mnp = n;
                }
            }
        }
        ingreso(n);
    }
    cout << endl << "El mayor par es " << mp << endl;
    cout << "hay " << cim << " numeros impares" << endl;
    cout << "El menor primo es " << mnp << endl;
    return 0;
}
