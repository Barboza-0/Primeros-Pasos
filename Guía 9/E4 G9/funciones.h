#include <iostream>
#include "funciones2.h"

using namespace std;

void carga0(int vkt[], int vcp[][31]){
    for(int x = 0; x < 30; x++){
        vkt[x] = 0;
    }
    for(int y = 0; y < 30; y++){
        for(int x = 0; x < 31; x++){
            vcp[y][x] = 0;
        }
    }
}

void carga(int vc[], int vcc[], int vpb[]){
    for(int x = 0; x < 30; x++){
        vc[x] = x + 1;
        vcc[x] = x + 1;
        vpb[x] = x + 1;
    }
}

void proceso(int vc[], int vcc[], int vkt[], int vcp[][31], int vpb[], int vpc[], int vcq[]){
    int d, cc, kr, cp;
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese el codigo de chofer: ";
    cin >> cc;
    cout << "Ingrese los kilometros recorridos: ";
    cin >> kr;
    cout << "Ingrese la cantidad de piezas rotas: ";
    cin >> cp;
    while(d != 0){
        int dact = d, p = cp, c = 0, cfp = 0, dfp = 0;
        while(dact == d){
            dfp++;
            int i = buscar(cc, vcc);
            if(cp < p){
                c = i;
                p = cp;
            }
            vkt[i] += kr;
            vcp[i][d - 1] += cp;
            if(dact < 15){
                cfp++;
            }
            cout << "Ingrese el dia: ";
            cin >> d;
            cout << "Ingrese el codigo de chofer: ";
            cin >> cc;
            cout << "Ingrese los kilometros recorridos: ";
            cin >> kr;
            cout << "Ingrese la cantidad de piezas rotas: ";
            cin >> cp;
        }
        cout << endl << "En el dia " << dact << " el codigo de chofer " << vcc[c] << " tuvo " << p << " piezas rotas" << endl << endl;
        promedio(vcp, vcq, cfp, dfp);
    }
    orden(vkt, vpb, vcc);
}
