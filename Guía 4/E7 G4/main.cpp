#include <iostream>

using namespace std;

int main()
{
    int pos, n, mx;
    for(int x = 1; x <= 10; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(x == 1){
            mx = n;
            pos = x;
        }
        else{
            if(n > mx){
                mx = n;
                pos = x;
            }
        }
    }
    cout << endl << "El numero maximo es " << mx << " en la posicion " << pos << endl;
    return 0;
}
