#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int cp = 0, cn = 0, ci = 0, n, r;
    for(int x = 0; x < 100; x++){
        ingreso(n);
        positivoNegativoCero(n, r);
        if(r == 0){
            ci++;
        }
        else{
            if(r == 1){
                cp++;
            }
            else{
                cn++;
            }
        }
    }
    cout << endl << "Hay " << cp << " numeros positivos" << endl;
    cout << "Hay " << ci << " numeros iguales" << endl;
    cout << "Hay " << cn << " numero negativos" << endl;
    return 0;
}
