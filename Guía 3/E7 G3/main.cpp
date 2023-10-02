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

    if(a > b && b > c && c > d){
        cout << endl << "Ordenados de mayor a menor" << endl;
    }
    else{
        cout << endl << "Desordenados" << endl;
    }
    return 0;
}
