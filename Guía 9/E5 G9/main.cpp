#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    int vc[400], vca[10], vna[20], vcm[400], vnc[200], vtd[400], vkr[400], vn[20], vub[3], vcp[10];
    float vik[400];
    cargaZ(vnc, vn, vca, vub, vcp);
    carga(vc, vik, vna);
    proceso(vc, vca, vik, vna, vcm, vnc, vtd, vkr, vn, vub, vcp);
    cout << endl;
    for(int x = 0; x < 200; x++){
        if(vnc[x] != 0){
            cout << "El cliente " << x + 1 << " abono al alquiler " << vnc[x] << endl;
        }
    }
    cout << endl;
    for(int x = 0; x < 3; x++){
        cout << "La ubicacion " << x + 1 << " recaudo en total " << vub[x] << endl;
    }
    cout << endl;
    for(int x = 0; x < 20; x++){
            if(vn[x] != 0){
                cout << "En la agencia " << x + 1 << " la cantidad de autos alquilados fue de " << vn[x] << endl;
            }
    }
    cout << endl;
    for(int x = 0; x < 10; x++){
            if(vca[x] != 0){
                cout << "La categoria " << vcp[x] << " fue alquilada " << vca[x] << " veces" << endl;
            }
    }
    cout << endl;
    for(int x = 0; x < 20; x++){
        if(vn[x] < 10){
            cout << "En la agencia " << x + 1 << " se efectuaron menos de diez alquileres en el mes" << endl;
        }
    }
    return 0;
}
