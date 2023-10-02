#include <iostream>
#include <windows.h>

using namespace std;

void cursor(int x, int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void cuadro(int x1, int y1, int x2, int y2){
    int i;
    for(i = x1; i < x2; i++){
        cursor(i, y1); cout << "\304";
        cursor(i, y2); cout << "\304";
    }
    for(i = y1; i < y2; i++){
        cursor(x1, i); cout << "\263";
        cursor(x2, i); cout << "\263";
    }
    cursor(x1, y1); cout << "\332";
    cursor(x1, y2); cout << "\300";
    cursor(x2, y1); cout << "\277";
    cursor(x2, y2); cout << "\331";
}

void cobro(float& t, float& p, float& r, float& s){
    float f = 0;
    r = t - p;
    while(p < t){
        cursor(65, 6); cout << "          "; cursor(46, 8); cout << "                                                    ";
        cursor(50, 6); cout << "El total es de " << r;
        cursor(48, 10); cout << "Ingrese el faltante "; cin >> f; cursor(68, 10); cout << "                    ";
        r -= f; p += f;
    }
    if(p == t){
        cursor(50, 6); cout << "                       "; cursor(48, 10); cout << "                             "; cursor(46, 8); cout << "                                                    ";
        cursor(54, 16), cout << "Pago completo";
    }
    else{
        s = p - t;
        cursor(50, 6); cout << "                       "; cursor(48, 10); cout << "                             "; cursor(46, 8); cout << "                                                    ";
        cursor(54, 12), cout << "Pago completo";
        cursor(51, 16); cout << "Su vuelto es de " << s;
    }
}
