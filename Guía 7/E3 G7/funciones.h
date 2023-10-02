#include <iostream>

using namespace std;

void ingreso(int &n){
    cout << "Ingrese un numero: ";
    cin >> n;
}

void par(int &n, int &r){
    if(n % 2 == 0){
        r = 1;
    }
    else{
        r = 0;
    }
}
