#include <iostream>

using namespace std;

int main()
{
    int n, bp = 0, bn = 0, mn, mx;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(n != 0){
        if(n > 0){
            if(!bp){
                mn  = n;
                bp = 1;
            }
            else{
                if(n < mn){
                    mn = n;
                }
            }
        }
        else{
            if(!bn){
                mx = n;
                bn = 1;
            }
            else{
                if(n > mx){
                    mx = n;
                }
            }
        }
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << "El maximo negativo es " << mx << " y el menor positivo es " << mn << endl;
    return 0;
}
