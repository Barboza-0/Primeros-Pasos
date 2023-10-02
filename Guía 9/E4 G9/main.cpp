#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    int vc[30], vcc[30], vpb[30], vkt[30], vpc[30], vcp[30][31], vcq[30];
    carga0(vkt, vcp);
    carga(vc, vcc, vpb);
    for(int x = 0; x < 30; x++){
        vcq[x] = vcc[x];
    }
    proceso(vc, vcc, vkt, vcp, vpb, vpc, vcq);
    cout << endl;
    for(int x = 0; x < 30; x++){
        cout << "El camion " << vpb[x] << " recorrio " << vkt[x] << " kilometros y el codigo de chofer es " << vcc[x] << endl;
    }
    return 0;
}
