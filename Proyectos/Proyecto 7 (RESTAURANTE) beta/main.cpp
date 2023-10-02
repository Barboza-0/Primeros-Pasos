#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    int a = 0, e = 0, i = 0, se = 0, c = 0, ad = 0, comidas[20], bebidas[20];
    float t = 0.00, preciosComidas[9], preciosBebidas[9];
    carga(preciosComidas, preciosBebidas);
    cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
    cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
    cursor(55, 12); cout << "BIENVENIDO"; cursor(46, 16); cout << "Presione ENTER para ingresar.."; cursor(60, 18); a = getchar();
    if(a == 10){
        system("CLS");
        cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
        cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";

    }
    else{
        cursor(0, 26); return 0;
    }
    cuadro(18, 11, 101, 13);
    cursor(22, 12); cout << "1/Menu"; cursor(40, 12); cout << "2/Express"; cursor(68, 12); cout << "3/Sugerencias"; cursor(88, 12); cout << "0/Salir" << endl; cursor(60, 15); cin >> a;
    switch(a){
    case 1:
        system("CLS");
        cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
        cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL"; cursor(58, 6); cout << "MENU";
        cursor(15, 6); cout << "COMIDAS"; cursor(5, 9); cout << "Elote..............c 1200.00 (1)"; cursor(5, 11); cout << "Lasagna............c 2000.00 (2)"; cursor(5, 13); cout << "Sopa...............c 2400.00 (3)"; cursor(5, 15); cout << "Tacos Chinos.......c 2500.00 (4)"; cursor(5, 17); cout << "Casado.............c 2800.00 (5)"; cursor(5, 19); cout << "Pastas.............c 2900.00 (6)"; cursor(5, 21); cout << "Arroz Chino........c 3100.00 (7)"; cursor(5, 23); cout << "Steak Encebollado..c 3300.00 (8)";
        cursor(98, 6); cout << "BEBIDAS"; cursor(83, 9); cout << "Agua...............c    0.00 (1)"; cursor(83, 11); cout << "Hi-C...............c  900.00 (2)"; cursor(83, 13); cout << "7Up................c 1000.00 (3)"; cursor(83, 15); cout << "Coca Cola..........c 1000.00 (4)"; cursor(83, 17); cout << "Fanta..............c 1100.00 (5)"; cursor(83, 19); cout << "Zarza..............c 1300.00 (6)"; cursor(83, 21); cout << "Naturales..........c 1500.00 (7)"; cursor(83, 23); cout << "Batidos............c 1800.00 (8)";
        cursor(48, 13); cout << "Realizara una sola orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> e;
        cursor(48, 13); cout << "                         "; cursor(55, 16); cout << "           "; cursor(60, 18); cout << " ";
        if(e == 1){
            cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];
            cursor(51, 11); cout << "                   "; cursor(51, 16); cout << "                   ";
            total(comidas, bebidas, preciosComidas, preciosBebidas, t);
            cursor(48, 13); cout << "Desea confirmar su orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> c;
            if(c == 1){
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(50, 13); cout << "El total es de " << t;
                break;
            }
            else{
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(55, 12); cout << "BIENVENIDO"; cursor(46, 16); cout << "Presione ENTER para ingresar.."; cursor(60, 18); ad = getchar();
                if(ad == 10){
                    return main();
                }
            }
        }
        else{
            int x = 0;
            cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];
            while(comidas[x] != 0 || bebidas[x] != 0){
                x++;
                i++;
                cursor(69, 11); cout << "  "; cursor(69, 16); cout << "  ";
                cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];
            }
            cursor(51, 11); cout << "                   "; cursor(51, 16); cout << "                   ";
            total(comidas, bebidas, preciosComidas, preciosBebidas, t);
            cursor(48, 13); cout << "Desea confirmar su orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> c;
            if(c == 1){
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(50, 13); cout << "El total es de " << t;
                break;
            }
            else{
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(55, 12); cout << "BIENVENIDO"; cursor(46, 16); cout << "Presione ENTER para ingresar.."; cursor(60, 18); ad = getchar();
                if(ad == 10){
                    return main();
                }
            }
        }
    case 2:
        se = 1;
        system("CLS");
        cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
        cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL"; cursor(58, 6); cout << "MENU";
        cursor(15, 6); cout << "COMIDAS"; cursor(5, 9); cout << "Elote..............c 1200.00 (1)"; cursor(5, 11); cout << "Lasagna............c 2000.00 (2)"; cursor(5, 13); cout << "Sopa...............c 2400.00 (3)"; cursor(5, 15); cout << "Tacos Chinos.......c 2500.00 (4)"; cursor(5, 17); cout << "Casado.............c 2800.00 (5)"; cursor(5, 19); cout << "Pastas.............c 2900.00 (6)"; cursor(5, 21); cout << "Arroz Chino........c 3100.00 (7)"; cursor(5, 23); cout << "Steak Encebollado..c 3300.00 (8)";
        cursor(98, 6); cout << "BEBIDAS"; cursor(83, 9); cout << "Agua...............c    0.00 (1)"; cursor(83, 11); cout << "Hi-C...............c  900.00 (2)"; cursor(83, 13); cout << "7Up................c 1000.00 (3)"; cursor(83, 15); cout << "Coca Cola..........c 1000.00 (4)"; cursor(83, 17); cout << "Fanta..............c 1100.00 (5)"; cursor(83, 19); cout << "Zarza..............c 1300.00 (6)"; cursor(83, 21); cout << "Naturales..........c 1500.00 (7)"; cursor(83, 23); cout << "Batidos............c 1800.00 (8)";
        cursor(48, 13); cout << "Realizara una sola orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> e;
        cursor(48, 13); cout << "                         "; cursor(55, 16); cout << "           "; cursor(60, 18); cout << " ";
        if(e == 1){
            cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];
            cursor(51, 11); cout << "                   "; cursor(51, 16); cout << "                   ";
            total(comidas, bebidas, preciosComidas, preciosBebidas, t);
            cursor(48, 13); cout << "Desea confirmar su orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> c;
            if(c == 1){
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(50, 13); cout << "El total es de " << t;
                break;
            }
            else{
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(55, 12); cout << "BIENVENIDO"; cursor(46, 16); cout << "Presione ENTER para ingresar.."; cursor(60, 18); a = getchar();
                return main();
            }
        }
        else{
            int x = 0;
            cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];
            while(comidas[x] != 0 || bebidas[x] != 0){
                x++;
                i++;
                cursor(69, 11); cout << "  "; cursor(69, 16); cout << "  ";
                cursor(51, 11); cout << "Orden de Comidas: "; cin >> comidas[i]; cursor(51, 16); cout << "Orden de Bebidas: "; cin >> bebidas[i];

            }
            cursor(51, 11); cout << "                   "; cursor(51, 16); cout << "                   ";
            total(comidas, bebidas, preciosComidas, preciosBebidas, t);
            cursor(48, 13); cout << "Desea confirmar su orden?"; cursor(55, 16); cout << "1/Si   0/No"; cursor(60, 18); cin >> c;
            if(c == 1){
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(50, 13); cout << "El total es de " << t;
                break;
            }
            else{
                system("CLS");
                cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5);
                cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
                cursor(55, 12); cout << "BIENVENIDO"; cursor(46, 16); cout << "Presione ENTER para ingresar.."; cursor(60, 18); a = getchar();
                return main();
            }
        }
    case 3:
        system("CLS");
        cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 5); cuadro(1, 6, 118, 25);
        cursor(55, 2); cout << "RESTAURANTE"; cursor(56, 4); cout << "EL PICHEL";
        cursor(48, 13); cout << "No aceptamos sugerencias.."; cursor(56, 15); cout << "Gracias";
    default:
        cursor(0, 26); return 0;
    }
    cursor(0, 26); return 0;
}
