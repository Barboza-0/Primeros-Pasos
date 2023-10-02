#include <iostream>

using namespace std;

void ingreso(int &n){
    cout << "Ingresa un numero: ";
    cin >> n;
}

void primo(int n, int &r){
    int j = 1, contp = 0;
    while(n >= j){
        if(n % j == 0){
            contp++;
        }
        j++;
    }
    if(contp == 2){
        r = 1;
    }
    else{
        r = 0;
    }
}
