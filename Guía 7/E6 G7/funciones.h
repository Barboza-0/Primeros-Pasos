#include <iostream>

using namespace std;

void ingreso(int &a, int &b){
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
}

void sumaResta(int a, int b, int &s, int &r){
    s = a + b;
    r = a - b;
}
