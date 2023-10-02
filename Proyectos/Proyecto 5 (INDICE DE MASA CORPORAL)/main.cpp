#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 3); cuadro(87, 17, 118, 25);
    cursor(47, 2); cout << "Indice de Masa Corporal"; cursor(92, 18); cout << "Menor a 18.5 bajo peso"; cursor(94, 20); cout << "18.5 - 24.9 normal"; cursor(92, 22); cout << "25.0 - 29.9 sobre peso"; cursor(93, 24); cout << "Mas de 30.0 obesidad";
    float p, a, i = 0;
    cursor(30, 8); cout << "Ingrese su peso(kg): "; cin >> p; cursor(62, 8); cout << "Ingrese su altura(cm): "; cin >> a;
    indice(p, a, i);
    cursor(2, 26); return 0;
}
