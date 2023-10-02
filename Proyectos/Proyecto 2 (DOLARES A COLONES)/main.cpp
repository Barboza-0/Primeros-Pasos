#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    float d = 0, c = 0, tc = 536.75;
    cuadro(0, 0, 119, 26);
    cuadro(1, 1, 118, 3);
    cursor(50, 2); cout << "DOLARES A COLONES";
    cursor(47, 6); cout << "Ingrese los dolares: "; cin >> d;
    c = tc * d;
    cursor(48, 8); cout << "Los colones son: " << c;
    cursor(2, 26); return 0;
}
