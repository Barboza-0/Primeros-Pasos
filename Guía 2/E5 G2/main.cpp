#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cout << "Ingrese un numero: ";
    cin >> n;

    r = n % 2;

    if(r == 0){
        cout << endl << "Par" << endl;
    }
    else{
        cout << endl << "Impar" << endl;
    }
    return 0;
}
