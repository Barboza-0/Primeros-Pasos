#include <iostream>

using namespace std;

int buscar(int na, int vna[]){
    for(int x = 0; x < 300; x++){
        if(na == vna[x]){
            return x;
            break;
        }
    }
}

void clienteMx(int nc, int ncm, int mx, int nuv, int i, float vpu[]){
    if(vpu[i] * nuv > mx){
        mx = vpu[i] * nuv;
        ncm = nc;
    }
}
