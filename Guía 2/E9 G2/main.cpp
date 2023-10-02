#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, mn, mx;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout << "Ingrese el cuarto numero: ";
    cin >> d;
    cout << "Ingrese el ultimo numero: ";
    cin >> e;

    if(a < b){
        mn = a;
    }
    else{
        mn = b;
    }

    if(c < mn){
        mn = c;
    }
    if(d < mn){
        mn = d;
    }
    if(e < mn){
        mn = e;
    }
    if(a > b){
        mx = a;
    }
    else{
        mx = b;
    }

    if(c > mx){
        mx = c;
    }
    if(d > mx){
        mx = d;
    }
    if(e > mx){
        mx = e;
    }
    cout << endl << "El menor es " << mn << " y el mayor es " << mx << endl;
    return 0;
}
