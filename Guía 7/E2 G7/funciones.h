#include <iostream>

using namespace std;

void ingreso(int &a, int &b){
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero para mostrar cual es mayor: ";
    cin >> b;
}

void mayor(int a, int b, int &r){
    if(a == b){
        cout << endl << "Son iguales" << endl;
    }
    else{
        if(a > b){
            cout << endl << a << " es mayor" << endl;
        }
        else{
            cout << endl << b << " es mayor" << endl;
        }
    }
}
