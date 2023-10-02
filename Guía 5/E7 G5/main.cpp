#include <iostream>

using namespace std;

int main()
{
    int c = 0, n, mx;
    cout << "Ingrese un numero: ";
    cin >> n;
    if(c == 0){
        mx = n;
        c++;
    }
    while(n != 0){
        if(n > mx){
            mx = n;
            c++;
        }
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << mx << " fue el numero maximo en la posicion " << c << endl;
    return 0;
}
