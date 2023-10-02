#include <iostream>

using namespace std;

int main()
{
    int bi, bp, n, mx, mn;
    for(int x = 0; x < 20; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(n % 2 == 0){
            if(!bp){
                mx = n;
                bp = 1;
            }
            else{
                if(n > mx){
                    mx = n;
                }
            }
        }
        else{
            if(!bi){
                mn = n;
                bi = 1;
            }
            else{
                if(n < mn){
                    mn = n;
                }
            }
        }

    }
    cout << endl << "El maximo par es " << mx << " y el minimo impar es " << mn << endl;
    return 0;
}
