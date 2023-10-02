#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    cuadro(0, 0, 119, 26);
    cuadro(1, 1, 118, 3);
    cursor(55, 2); cout << "Numero Mayor";
    int n, mx;
    cursor(51, 8); cout << "Ingrese un numero: "; cin >> n;
    while(n != 0){
        if(n > mx){
            mx = n;
        }
        cursor(70, 8); cout << "                   ";
        cursor(51, 8); cout << "Ingrese un numero: "; cin >> n;
    }
    cursor(50, 13); cout << "El numero mayor fue " << mx;
    cursor(0, 26); return 0;
}
