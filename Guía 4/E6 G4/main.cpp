#include <iostream>

using namespace std;

int main()
{
    int c, n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for(int x = 1; x <= n; x++){
        if(n % x == 0){
            c++;
        }
    }
    if(c == 2){
        cout << endl << "Numero primo" << endl;
    }
    else{
        cout << endl << "No es numero primo" << endl;
    }
    return 0;
}
