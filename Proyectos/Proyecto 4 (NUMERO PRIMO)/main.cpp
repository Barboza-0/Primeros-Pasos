#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    int n, p = 0;
    cuadro(0, 0, 119, 25);
    cuadro(1, 1, 118, 3);
    cursor(51, 2); cout << "Numero Primo";
    cursor(47, 8); cout << "Ingrese un numero: "; cin >> n;
    primo(n, p);
    cursor(2, 26); return 0;
}
