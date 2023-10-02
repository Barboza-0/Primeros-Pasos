#include <iostream>
#include "funciones2.h"

using namespace std;

void cargaZ(int vnc[], int vn[], int vca[], int vub[], int vcp[]){
    for(int x = 0; x < 200; x++){
        vnc[x] = 0;
        if(x < 10){
            vca[x] = 0;
            vcp[x] = x + 1;
        }
        if(x < 20){
            vn[x] = 0;
        }
        if(x < 3){
            vub[x] = 0;
        }
    }
}

void carga(int vc[], float vik[], int vna[]){
    cargaIf(vc, vik, vna);
}

void proceso(int vc[], int vca[], float vik[], int vna[], int vcm[], int vnc[], int vtd[], int vkr[], int vn[], int vub[], int vcp[]){
    int ca, c, nc, td, kr, na, u;
    cout << "Ingrese el codigo de auto: ";
    cin >> ca;
    cout << "Ingrese la categoria: ";
    cin >> c;
    cout << "Ingrese el numero de cliente: ";
    cin >> nc;
    cout << "Ingrese el total de dias de alquiler: ";
    cin >> td;
    cout << "Ingrese los kilometros recorridos: ";
    cin >> kr;
    cout << "Ingrese el numero de agencia: ";
    cin >> na;
    cout << "Ingrese la ubicacion de la agencia: ";
    cin >> u;
    cout << endl;
    while(ca != 0){
        int i = buscarI(c, vc);
        int n = buscarN(nc, vnc);
        vnc[n] += vik[i] * kr;
        vub[u - 1] += vik[i] * kr;
        vn[na - 1] += 1;
        vca[ca - 1] += 1;
        cout << "Ingrese el codigo de auto: ";
        cin >> ca;
        cout << "Ingrese la categoria: ";
        cin >> c;
        cout << "Ingrese el numero de cliente: ";
        cin >> nc;
        cout << "Ingrese el total de dias de alquiler: ";
        cin >> td;
        cout << "Ingrese los kilometros recorridos: ";
        cin >> kr;
        cout << "Ingrese el numero de agencia: ";
        cin >> na;
        cout << "Ingrese la ubicacion de la agencia: ";
        cin >> u;
        cout << endl;
    }
}
