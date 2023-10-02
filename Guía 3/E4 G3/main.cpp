#include <iostream>

using namespace std;

int main()
{
    int i, l, t;
    cout << "Ingrese el importe total: ";
    cin >> i;
    cout << "Ingrese el numero de litros a comprar: ";
    cin >> l;

    if(l > 100 && l <= 300){
        t = i * 0.90;
    }
    else{
        if(l > 300 && l <= 500){
            t = i * 0.85;
        }
        else{
            if(l > 500){
                t = i * 0.75;
            }
            else{
                t = i;
            }
        }
    }
    cout << endl << "El total a pagar es " << t << endl;
    return 0;
}
