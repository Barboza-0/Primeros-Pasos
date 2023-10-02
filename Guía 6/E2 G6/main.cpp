#include <iostream>

using namespace std;

int main()
{
    int z, nc, kc;
    cout << "Ingrese la zona: ";
    cin >> z;
    cout << "Ingrese el numero de cliente: ";
    cin >> nc;
    cout << "Ingrese los kilovatios consumidos: ";
    cin >> kc;
    while(z != 0){
        int zact = z, tf = 0, c = 0, f;
        while(z == zact){
            c++;
            if(kc > 200){
                f = kc * 0.15;
            }
            else{
                if(kc > 100){
                    f = kc * 0.12;
                }
                else{
                    f = kc * 0.10;
                }
            }
            tf += f;
            cout << "0/finalizar o numero de zona: ";
            cin >> z;
            if(z == 0){
                break;
            }
            else{
                cout << "Ingrese el numero de cliente: ";
                cin >> nc;
                cout << "Ingrese los kilovatios consumidos: ";
                cin >> kc;
            }
        }
        cout << endl << "En la zona " << zact << " hay " << c << " usuarios y se facturo " << tf << endl;
    }
    return 0;
}
