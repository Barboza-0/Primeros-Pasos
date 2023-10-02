#include <iostream>
#include "funciones2.h"

using namespace std;

void carga(int vc[], float vp[]){
    for(int x = 0; x < 20; x++){
        cout << "Ingrese el codigo de articulo: ";
        cin >> vc[x];
        cout << "Ingrese el precio unitario: ";
        cin >> vp[x];
    }
}

void inicial(int t, int va[]){
    for(int x = 0; x < t; x++){
        va[x] = 0;
    }
}

void negativo(bool vb[]){
    for(int x = 0; x < 12; x++){
        vb[x] = 0;
    }
}

void proceso(int vc[], float vp[], int va[], bool vb[]){
    int nc, ca, m, d, cv;
    cout << "Ingrese el numero de cliente: ";
    cin >> nc;
    cout << "Ingrese el codigo de articulo: ";
    cin >> ca;
    cout << "Ingrese el mes: ";
    cin >> m;
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese la cantidad vendida: ";
    cin >> cv;
    while(nc != 0){
        int i = buscar(ca, vc);
        va[i] += cv;
        vb[m - 1] = 1;
        cout << "Ingrese el numero de cliente: ";
        cin >> nc;
        cout << "Ingrese el codigo de articulo: ";
        cin >> ca;
        cout << "Ingrese el mes: ";
        cin >> m;
        cout << "Ingrese el dia: ";
        cin >> d;
        cout << "Ingrese la cantidad vendida: ";
        cin >> cv;
    }
}

void fa(int vc[], int va[]){
    ordenar(vc, va);
    mostrar(vc, va);
}

void fb(bool vb[]){
    for(int x = 0; x < 12; x++){
        if(!vb[x]){
            mes(x);
        }
    }
}

void fc(int vc[], int va[]){
    int acu = 0, p;
    for(int x = 0; x < 20; x++){
        acu += va[x];
    }
    p = acu / 20;
    for(int x = 0; x < 20; x++){
        if(va[x] > p){
            cout << endl << "El codigo " << vc[x] << " vendio mas que el promedio" << endl;
        }
    }
}
