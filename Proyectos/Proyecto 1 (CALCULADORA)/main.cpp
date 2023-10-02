#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main(){
    int n, n2, r, i = 0;
    char o;
    system("COLOR F0");
    cuadro(0,0,119,26);
    cursor(55, 2); cout << "CALCULADORA";
    cuadro(1, 1, 118, 3);
    cursor(26, 6); cout << "Numero: "; cin >> n;
    cursor(56, 6); cout << "Operador:"; cin >> o;
    cursor(87, 6); cout << "Numero: "; cin >> n2;
    switch(o){
    case '+':
        r = n + n2;
        break;
    case '-':
        r = n - n2;
        break;
    case '*':
        r = n * n2;
        break;
    case '/':
        r = n / n2;
        break;
    default:
        cursor(57, 14); cout << "Invalido";
        i = 1;
    }
    if(i != 1){
        cursor(59, 14); cout << "= " << r;
    }
    cursor(2, 26); return 0;
}
