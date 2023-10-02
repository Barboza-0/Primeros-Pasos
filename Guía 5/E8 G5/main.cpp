#include <iostream>

using namespace std;

int main()
{
    int n, mn, b = 0, minu;
    cout << "Ingrese un numero: ";
    cin >> n;
    mn = n;
    while(n != 0){
        if(n < mn){
            minu = mn;
            mn = n;
            b = 1;
        }
        else{
            if(!b){
                minu = n;
                b = 1;
            }
            else{
                if(n < minu){
                    minu = n;
                }
            }
        }
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << "El 1er minimo fue " << minu << " y el segundo minimo fue " << mn << endl;
    return 0;
}
