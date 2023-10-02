#include <iostream>

using namespace std;

void ingreso(int &n){
    cout << "Ingrese un numero: ";
    cin >> n;
}

void positivoNegativoCero(int n, int &r){
    if(n == 0){
        r = 0;
    }
    else{
        if(n > 0){
            r = 1;
        }
        else{
            r = -1;
        }
    }
}
