#include <iostream>

using namespace std;

int main()
{
    int a, b, c, s, p;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    s = a + b;
    p = b * c;

    if(s > p){
        cout << endl << "La suma es mayor al producto." << endl;
    }
    else{
        cout << endl << "El producto es mayor a la suma." << endl;
    }
    return 0;
}
