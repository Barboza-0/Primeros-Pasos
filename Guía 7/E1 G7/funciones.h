#include <iostream>

using namespace std;

void ingreso(int &a, int &b){
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero para sacar el producto: ";
    cin >> b;
}

void producto(int a, int b, int &r){
    r = a * b;
}
