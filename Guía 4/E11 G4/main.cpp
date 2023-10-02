#include <iostream>

using namespace std;

int main()
{
    int primo, n, c, mx;
    primo = 0;
    for(int x = 0; x < 10; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        c = 0;
        for(int y = 1; y <= n; y++){
            if(n % y == 0){
                c++;
            }
        }
        if(c == 2){
            if(!primo){
                mx = n;
                primo = 1;
            }
            else{
                if(n > mx){
                    mx = n;
                }
            }
        }
    }
    if(!primo){
        cout << endl << "No hay ningun numero primo" << endl;
    }
    else{
        cout << endl << "El mayor numero primo es " << mx << endl;
    }
    return 0;
}
