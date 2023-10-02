#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, m;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    cout << "Ingrese un numero mas: ";
    cin >> c;
    cout << "Ingrese el ultimo numero: ";
    cin >> d;

    if(a < b){
        m = a;
    }
    else{
        m = b;
    }
    if(c < m){
        m = c;
    }
    if(d < m){
        m = d;
    }
    cout << endl << "El menor es " << m << endl;
    return 0;
}
