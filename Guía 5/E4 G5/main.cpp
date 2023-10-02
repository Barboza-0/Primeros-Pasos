#include <iostream>

using namespace std;

int main()
{
    int a, b, mx, mn;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    if(a > b){
        mx = a;
        mn = b;
    }
    else{
        mx = b;
        mn = a;
    }
    while(mn <= mx){
        cout << mn << endl;
        mn++;
    }
    return 0;
}
