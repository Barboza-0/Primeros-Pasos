#include <iostream>

using namespace std;

int main()
{
    int mx = 0, cm = 0, p = 0, n;
    cout << "Ingrese el peso de la encomienda: ";
    cin >> n;
    while(n > 0){
        int acu = 0, enc = 0, p;
        while(n + acu <= 200 && n > 0){
            acu += n;
            enc++;
            cout << "Ingresa el peso de la encomienda: ";
            cin >> n;
        }
        if(enc > mx){
            mx = enc;
            cm++;
            p = cm;
        }
        else{
            cm++;
        }
        cout << endl << "El camion " << cm << " lleva " << acu << " kilos." << endl;
    }
    cout << endl << "El camion " << p << " es el que lleva mas encomiendas con " << mx << endl;
    cout << "Salieron " << cm << " camiones." << endl;
    return 0;
}
