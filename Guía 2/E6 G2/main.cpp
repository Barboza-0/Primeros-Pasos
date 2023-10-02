#include <iostream>

using namespace std;

int main()
{
    int imp, t;
    cout << "Ingrese un numero: ";
    cin >> imp;

    if(imp >= 1000 && imp < 5000){
        t = imp * 0.90;
    }
    else{
        if(imp >= 5000){
            t = imp * 0.82;
        }
        else{
            t = imp;
        }
    }
    cout << endl << "El total es de " << t << endl;
    return 0;
}
