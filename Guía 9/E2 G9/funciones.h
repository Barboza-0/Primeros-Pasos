#include <iostream>
#include "funciones2.h"

using namespace std;

void carga(int vna[], int vcus[], float vpu[], float va[]){
    for(int x = 0; x < 300; x++){
        cout << "Ingrese el numero de articulo: ";
        cin >> vna[x];
        cout << "Ingrese la cantidad de unidades en stock: ";
        cin >> vcus[x];
        cout << "Ingrese el peso unitario: ";
        cin >> vpu[x];
        va[x] = 0;
    }
}

void proceso(int vna[], int vcus[], float vpu[], float va[], int vuv[]){
    int nc, na, nuv, i = 0, mx = 0, ncm = 0;
    cout << "Ingrese el numero de cliente: ";
    cin >> nc;
    cout << "Ingrese el numero de articulo: ";
    cin >> na;
    cout << "Ingrese el numero de unidades vendidas: ";
    cin >> nuv;
    while(na != 0){
        i = buscar(na, vna);
        if(vcus[i] >= vcus[i] - nuv){
            vcus -= nuv;
            vuv[i] += nuv;
            va[i] += vpu[i] * nuv;
        }
        cout << endl << "Cliente numero " << nc << endl << "Articulo numero " << na << endl << "Cantidad vendida " << nuv << endl << "Importe total " << vpu[i] * nuv << endl << endl;
        clienteMx(nc, ncm, mx, nuv, i, vpu);
        cout << "Ingrese el numero de cliente: ";
        cin >> nc;
        cout << "Ingrese el numero de articulo: ";
        cin >> na;
        cout << "Ingrese el numero de unidades vendidas: ";
        cin >> nuv;
    }
    cout << endl << "El cliente que mas compro fue " << ncm << endl;
}

void noVentas(int vna[], float va[]){
    for(int x = 0; x < 300; x++){
        if(va[x] == 0){
            cout << "El articulo " << vna[x] << " no vendio" << endl;
        }
    }
}
