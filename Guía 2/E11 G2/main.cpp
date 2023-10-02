#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout << "Ingrese el ultimo numero: ";
    cin >> d;

    if(a < 100){
        cout << endl << a << endl;
    }
    if(b < 100){
        cout << endl << b << endl;
    }
    if(c < 100){
        cout << endl << c << endl;
    }
    if(d < 100){
        cout << endl << d << endl;
    }
    return 0;
}
