#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    char vt[50], c;
    int i = 0;
    ingreso(c);
    while(c != '.' && i < 50){
        vt[i] = c;
        ingreso(c);
        i++;
    }
    for(int x = 0; x < 50; x++){
        if(vt[x] == 'a' || vt[x] == 'A'){
            vt[x] = 'e';
        }
    }
    cout << endl << vt << endl;
    return 0;
}
