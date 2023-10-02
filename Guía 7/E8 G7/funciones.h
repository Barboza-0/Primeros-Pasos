#include <iostream>

using namespace std;

void ingreso(int &n){
    cout << "Ingrese un numero: ";
    cin >> n;
}

void mayor(int n, int &m){
    if(n % 2 == 0){
        m = 1;
    }
    else{
        m = 0;
    }
}

void primo(int n, int &p){
    int j = 1, contp = 0;
    while(n >= j){
        if(n % j == 0){
            contp++;
        }
        j++;
    }
    if(contp == 2){
        p = 1;
    }
    else{
        p = 0;
    }
}
