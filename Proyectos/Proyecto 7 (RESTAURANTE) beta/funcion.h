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

void carga(float preciosComidas[], float preciosBebidas[]){
    preciosComidas[0] = 0.00; preciosComidas[1] = 1200.00; preciosComidas[2] = 2000.00; preciosComidas[3] = 2400.00; preciosComidas[4] = 2500.00; preciosComidas[5] = 2800.00; preciosComidas[6] = 2900.00; preciosComidas[7] = 3100.00; preciosComidas[8] = 3300.00;
    preciosBebidas[0] = 0.00; preciosBebidas[1] = 0.00; preciosBebidas[2] = 900.00; preciosBebidas[3] = 1000.00; preciosBebidas[4] = 1000.00; preciosBebidas[5] = 1100.00; preciosBebidas[6] = 1300.00; preciosBebidas[7] = 1500.00; preciosBebidas[8] = 1800.00;
}

void total(int comidas[], int bebidas[], float preciosComidas[], float preciosBebidas[], float& t){
    int c = 0, b = 0;
    for(int x = 0; x < 20; x++){
        if(comidas[x] != '\0' || bebidas[x] != '\0'){
            c = comidas[x];
            b = bebidas[x];
            t += preciosComidas[c];
            t += preciosBebidas[b];
        }
        else{
            break;
        }
    }
}
