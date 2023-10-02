#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 3); cursor(58, 2); cout << "Cobro";
    float t = 10000, p = 0, r = 0, s = 0;
    cursor(50, 6); cout << "El total es de " << t; cursor(46, 8); cout << "Ingrese su monto de pago "; cin >> p;
    cobro(t, p, r, s);
    cursor(0, 26); return 0;
}
