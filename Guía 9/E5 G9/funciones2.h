#include <iostream>

using namespace std;

void cargaIf(int vc[], float vik[], int vna[]){
    int i = 100;
    for(int x = 0; x < 400; x++){
        vc[x] = x;
        vik[x] = x * i;
    }
    for(int y = 0; y < 20; y++){
        vna[y] += 1;
    }
}

int buscarI(int c, int vc[]){
    for(int x = 0;x < 400; x++){
        if(vc[x] == c){
            return x;
            break;
        }
    }
}

int buscarN(int nc, int vnc[]){
    for(int x = 0; x < 200; x++){
        if(vnc[x] == nc){
            return x;
            break;
        }
    }
}
