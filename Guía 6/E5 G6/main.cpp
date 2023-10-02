#include <iostream>

using namespace std;

int main()
{
    int np, d, m, npt, cc, pcu, mnt = 0;
    char tf;
    cout << "Ingrese el numero de proovedor: ";
    cin >> np;
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese el mes: ";
    cin >> m;
    cout << "Ingrese el tipo de factura: ";
    cin >> tf;
    cout << "Ingrese el numero de producto: ";
    cin >> npt;
    cout << "Ingrese la cantidad comprada: ";
    cin >> cc;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> pcu;
    int npmc = 0, nptmc = 0, tfa = 0, tfb = 0, tfc = 0, mcc = 0, nptc = npt, mmn = mnt;
    while(np != 0){
        int npact = np, mmx = 0, cont = 0;
        while(np == npact){
            mnt = cc * pcu;
            cont++;
            if(mnt > mmx){
                mmx = mnt;
            }
            if(tf == 'a'){
                tfa += mnt;
            }
            else{
                if(tf == 'b'){
                    tfb += mnt;
                }
                else{
                    tfc += mnt;
                }
            }
            if(m == 8){
                if(mnt < mmn){
                    mmn = mnt;
                    nptc = npt;
                }
            }
            if(cc > mcc){
                mcc = cc;
                npmc = npact;
                nptmc = npt;
            }
            cout << "Ingrese el numero de proovedor: ";
            cin >> np;
            cout << "Ingrese el dia: ";
            cin >> d;
            cout << "Ingrese el mes: ";
            cin >> m;
            cout << "Ingrese el tipo de factura: ";
            cin >> tf;
            cout << "Ingrese el numero de producto: ";
            cin >> npt;
            cout << "Ingrese la cantidad comprada: ";
            cin >> cc;
            cout << "Ingrese el precio unitario del producto: ";
            cin >> pcu;
        }
        cout << endl << "El monto maximo de la compra al proveedor " << npact << " fue de " << mmx << endl;
        cout << "Se realizaron " << cont << " compras a este proveedor" << endl;
    }
    cout << endl << mmn << " fue el menor monto de compra en el mes de agosto y el numero de producto es " << nptc << endl;
    cout << "La inversion total de todo el año en la factura A fue de " << tfa << endl;
    cout << "La inversion total de todo el año en la factura B fue de " << tfb << endl;
    cout << "La inversion total de todo el año en la factura C fue de " << tfc << endl;
    cout << "El numero de producto con mayor cantidad comprada es " << nptmc << " fue comprado al proveedor " << npmc << endl;
    return 0;
}
