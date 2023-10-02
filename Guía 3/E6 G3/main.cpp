#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    cout << "Ingrese el ultimo numero: ";
    cin >> c;

    if(a == b && b == c){
        cout << endl << "Equilatero" << endl;
    }
    else{
        if(a != b && b != c && a != c){
            cout << endl << "Escaleno" << endl;
        }
        else{
            cout << endl << "Isosceles" << endl;
        }
    }
    return 0;
}
