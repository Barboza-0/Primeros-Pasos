#include <iostream>

using namespace std;

int main()
{
    int l, p, t;
    cout << "Ingrese la cantidad de litros: ";
    cin >> l;
    cout << "Ingrese la forma de pago (1-0): ";
    cin >> p;

    if(l > 500){
        t = 10 * l;
    }
    else{
        if(l > 200){
            t = 15 * l;
        }
        else{
            if(l > 50){
                t = 20 * l;
            }
            else{
                t = 25 * l;
            }
        }
    }
    if(p == 1){
        t = t * 1.10;
    }
    cout << endl << "El total a abonar es de " << t << endl;
    return 0;
}
