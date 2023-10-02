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
