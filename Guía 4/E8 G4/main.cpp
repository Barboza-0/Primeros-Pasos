#include <iostream>

using namespace std;

int main()
{
    int pos, n, mn;
    for(int x = 1; x <= 20; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(x == 1){
            mn = n;
            pos = x;
        }
        else{
            if(n < mn){
                mn = n;
                pos = x;
            }
        }
    }
    cout << endl << "El numero menor es " << mn << " en la posicion " << pos << endl;
    return 0;
}
