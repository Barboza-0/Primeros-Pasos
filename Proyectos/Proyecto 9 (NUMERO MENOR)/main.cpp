#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 3); cursor(55, 2); cout << "Numero Menor";
    int n, nm;
    cursor(50, 11); cout << "Ingrese un numero: "; cin >> n;
    nm = n;
    while(n != 0){
        if(n < nm){
            nm = n;
        }
        cursor(68, 11); cout << "                   ";
        cursor(50, 11); cout << "Ingrese un numero: "; cin >> n;
    }
    cursor(50, 18); cout << "El numero menor fue " << nm;
    cursor(0, 26); return 0;
}
