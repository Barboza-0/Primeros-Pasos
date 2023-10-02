#include <iostream>

using namespace std;

int main()
{
    int mp = 0, v = 0, gmn = 0, n;
    for(int x = 0; x < 10; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        int cg = 0, cip = 0, pup = 0, up = 0, cnp = 0, cmn = 0, mx, p;
        mx = n + 1;
        while(n != 0){
            cg++;
            if(n < mx){
                mx = n;
            }
            else{
                cmn++;
            }
            if(n % 2 != 0){
                if(n > 0){
                    cip++;
                }
            }
            int j = 1, cp = 0;
            while(n >= j){
                if(n % j == 0){
                    cp++;
                }
                j++;
            }
            if(cp == 2){
                up = n;
                pup = cg;
            }
            else{
                cnp++;
            }
            cout << "Ingrese un numero: ";
            cout << "Ingrese un numero: ";
            cin >> n;
        }
        p = (cip * 100)/ cg;
        if(p > mp){
            if(x > 0){
                v = x;
                mp = p;
            }
        }
        if(cnp == cg){
            cout << endl << "No hay numeros primos en este grupo" << endl;
        }
        if(cmn == 0){
            gmn++;
        }
    }
    cout << endl << "El grupo " << v << " fue el de mayor porcentaje de numeros impares positivos con " << mp << endl;
    cout << endl << gmn << " grupos estaban ordenados de mayor a menor." << endl;
    return 0;
}
