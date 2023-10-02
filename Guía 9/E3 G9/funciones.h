#include <iostream>
#include "funciones2.h"

using namespace std;

void carga(int vt[], float vik[], float vtt[]){
    for(int x = 0; x < 20; x++){
        cout << "Ingrese el numero de tarifa: ";
        cin >> vt[x];
        cout << "Ingrese el importe por kilometro: ";
        cin >> vik[x];
        vtt[x] = 0;
    }
}

void carga0(int vcc[], int vc[], int vck[], float vnc[]){
    for(int x = 0; x < 100; x++){
        vcc[x] = 0;
        vc[x] = x;
        vck[x] = x;
        vnc[x] = 0;
    }
}

void proceso(int vt[], float vik[], float vtt[], float vnc[], int vcc[], int vc[], int vck[]){
    int nc, nt, kr, i, c;
    cout << "Ingrese el numero de camion: ";
    cin >> nc;
    cout << "Ingrese el numero de tarifa: ";
    cin >> nt;
    cout << "Ingrese los kilometros recorridos: ";
    cin >> kr;
    while(nc >= 0){
        i = buscarIn(nt, vt);
        vtt[i] += vik[i] * kr;
        c = buscarC(nc, vc);
        vnc[c] += vik[i] * kr;
        vcc[c] += kr;
        cout << "Ingrese el numero de camion: ";
        cin >> nc;
        cout << "Ingrese el numero de tarifa: ";
        cin >> nt;
        cout << "Ingrese los kilometros recorridos: ";
        cin >> kr;
    }
    orden(vc, vnc);
    menor(vcc, vck);
    cout << endl;
    for(int x = 0; x < 20; x++){
        cout << "La tarifa " << vt[x] << " recaudo " << vtt[x] << endl;
    }
    cout << endl;
    for(int x = 0; x < 100; x++){
            if(vnc[x] != 0){
                cout << "El camion " << vc[x] << " recaudo " << vnc[x] << endl;
            }
    }
    cout << endl;
    for(int x = 0; x < 100; x++){
            if(vcc[x] != 0){
                cout << "El camion " << vck[x] << " recorrio " << vcc[x] << " km" << endl;
            }
    }
}
