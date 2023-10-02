#include <iostream>

using namespace std;

int buscar(int& cc, int vcc[]){
    for(int x = 0; x < 30; x++){
        if(cc == vcc[x]){
            return x;
        }
    }
}

void orden(int vkt[], int vpb[], int vcc[]){
    int au = 0;
    for(int y = 0; y < 30; y++){
        for(int x = 0; x < 29; x++){
            if(vkt[x] < vkt[x + 1]){
                au = vkt[x + 1];
                vkt[x + 1] = vkt[x];
                vkt[x] = au;
                au = vpb[x + 1];
                vpb[x + 1] = vpb[x];
                vpb[x] = au;
                au = vcc[x + 1];
                vcc[x + 1] = vcc[x];
                vcc[x] = au;
            }
        }
    }
}

void promedio(int vcp[][31], int vcq[], int& cfp, int& dfp){
    for(int x = 0; x < 30; x++){
        int a = 0, b = 0, e = 0, f = 0;
        for(int y = 0; y < 31; y++){
            if(y >= 0 && y < 15){
                a += vcp[x][y];
            }
            else{
                b += vcp[x][y];
            }
        }
        e = a/cfp;
        f = b/dfp;
        cout << "Para el codigo " << vcq[x] << " el promedio de la primera quincena es " << e << " y en la segunda quincena el promedio es de " << f << endl;
    }
}
