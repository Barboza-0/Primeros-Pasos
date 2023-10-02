#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    float a;
    int b, r;
    for(int x = 0; x < 10; x++){
        ingreso(a, b);
        pagos(a, b, r);
        cout << endl << "Se realiaron " << b << " pagos de " << r << endl;
        ingreso(a, b);
    }
    return 0;
}
