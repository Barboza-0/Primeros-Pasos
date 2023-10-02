#include <iostream>

using namespace std;

int buscar(int ca, int vc[]){
    for(int x = 0; x < 20; x++){
        if(ca == vc[x]){
            return x;
        }
    }
}

void ordenar(int va[], int vc[]){
    int au = 0;
    for(int y = 0; y < 20; y++){
        for(int x = 0; x < 19; x++){
            if(va[x] < va[x + 1]){
                au = va[x + 1];
                va[x + 1] = va[x];
                va[x] = au;
                au = vc[x + 1];
                vc[x + 1] = vc[x];
                vc[x] = au;
            }
        }
    }
}

void mostrar(int vc[], int va[]){
    cout << endl;
    for(int x = 0; x < 20; x++){
        cout << "El codigo " << vc[x] << endl;
        cout << " vendio " << va[x] << endl;
    }
    cout << endl;
}

void mes(int m){
    switch(m){
    case 0:
        cout << "No hubo ventas en enero" << endl;
        break;
    case 1:
        cout << "No hubo ventas en febrero" << endl;
        break;
    case 2:
        cout << "No hubo ventas en marzo" << endl;
        break;
    case 3:
        cout << "No hubo ventas en abril" << endl;
        break;
    case 4:
        cout << "No hubo ventas en mayo" << endl;
        break;
    case 5:
        cout << "No hubo ventas en junio" << endl;
        break;
    case 6:
        cout << "No hubo ventas en julio" << endl;
        break;
    case 7:
        cout << "No hubo ventas en agosto" << endl;
        break;
    case 8:
        cout << "No hubo ventas en septiembre" << endl;
        break;
    case 9:
        cout << "No hubo ventas en octubre" << endl;
        break;
    case 10:
        cout << "No hubo ventas en noviembre" << endl;
        break;
    default:
        cout << "No hubo ventas en diciembre" << endl;
        break;
    }
}
