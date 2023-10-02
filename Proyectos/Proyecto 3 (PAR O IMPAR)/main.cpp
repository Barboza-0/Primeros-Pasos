#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    int n;
    system("COLOR F0");
    cuadro(0, 0, 119, 26);
    cuadro(1, 1, 118, 3);
    cursor(55, 2); cout << "Par o Impar";
    cursor(50, 7); cout << "Ingrese un numero: "; cin >> n;
    if(n % 2 == 0){
        cursor(46, 13); cout << "El numero " << n << " es un numero PAR";
    }
    else{
        cursor(45, 13); cout << "El numero " << n << " es un numero IMPAR";
    }
    cursor(2, 26); return 0;
}
