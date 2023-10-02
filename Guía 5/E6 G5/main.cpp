#include <iostream>

using namespace std;

int main()
{
    int d = 1, c = 0, n;
    cout << "Ingrese un numero: ";
    cin >> n;
    while(d <= n){
        if(n % d == 0){
            c++;
        }
        d++;
    }
    if(c == 2){
    cout << endl << "Es primo" << endl;
    }
    else{
    cout << endl << "No es primo" << endl;
    }

    return 0;
}
