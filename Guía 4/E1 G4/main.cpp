#include <iostream>

using namespace std;

int main()
{
    int n, mx;
    for(int x = 0; x < 10; x++){
        cout << "Ingrese un numero: ";
        cin >> n;

        if(x == 0){
            mx = n;
        }
        else{
            if(n > mx){
                mx = n;
            }
        }
    }
    cout << endl << "El maximo es " << mx << endl;
    return 0;
}
