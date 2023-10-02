#include <iostream>

using namespace std;

void ingreso(float &a, int &b){
    cout << "Ingresa el monto total: ";
    cin >> a;
    cout << "Ingresa la cantidad de pagos: ";
    cin >> b;
}

void pagos(float a, int b, int &r){
    r = a / b;
}
