#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int a, b, s, r;
    ingreso(a, b);
    sumaResta(a, b, s, r);
    cout << endl << "La suma es " << s << " y la resta es " << r << endl;
    return 0;
}
