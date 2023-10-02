#include <iostream>

using namespace std;

int buscarIn(int nt, int vt[]){
    for(int x = 0; x < 20; x++){
        if(nt == vt[x]){
            return x;
        }
    }
}

int buscarC(int nc, int vc[]){
    for(int x = 0; x < 100; x++){
        if(nc == vc[x]){
            return x;
        }
    }
}

void orden(int vc[], float vnc[]){
    int au = 0;
    for(int y = 0; y < 100; y++){
        for(int x = 0; x < 99; x++){
                if(vnc[x] < vnc[x + 1]){
                    au = vnc[x + 1];
                    vnc[x + 1] = vnc[x];
                    vnc[x] = au;
                    au = vc[x + 1];
                    vc[x + 1] = vc[x];
                    vc[x] = au;
            }
        }
    }
}

void menor(int vcc[], int vck[]){
    int au = 0;
    for(int y = 0; y < 100; y++){
        for(int x = 0; x < 99; x++){
                if(vcc[x] > vcc[x + 1]){
                    au = vcc[x + 1];
                    vcc[x + 1] = vcc[x];
                    vcc[x] = au;
                    au = vck[x + 1];
                    vck[x + 1] = vck[x];
                    vck[x] = au;
            }
        }
    }
}
