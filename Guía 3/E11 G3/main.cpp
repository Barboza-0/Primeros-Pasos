#include <iostream>

using namespace std;

int main()
{
    int a, b, c, mn, mid, mx;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el ultimo numero; ";
    cin >> c;

    if(a < b && a < c){
        mn = a;
    }
    else{
        if(b < a && b < c){
            mn = b;
        }
        else{
            if(c < a && c < b){
                mn = c;
            }
            else{
                cout << endl << "Son todos iguales" << endl;
            }
        }
    }
    if(mn == a){
        if(b < c){
            mid = b;
            mx = c;
        }
        else{
            mid = c;
            mx = b;
        }
    }
    else{
        if(mn == b){
            if(a < c){
                mid = a;
                mx = c;
            }
            else{
                mid = c;
                mx = a;
            }
        }
        else{
            if(mn == c){
                if(a < b){
                    mid = a;
                    mx = b;
                }
                else{
                    mid = b;
                    mx = a;
                }
            }
        }
    }
    cout << endl << "El minimo es " << mn << endl << "El medio es " << mid << endl << "El maximo es " << mx << endl;
    return 0;
}
