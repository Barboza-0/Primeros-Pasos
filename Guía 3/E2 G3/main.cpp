#include <iostream>

using namespace std;

int main()
{
    int n1, n2, r;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1 > n2){
        r = n1 - n2;
    }
    else{
        if(n1 == n2){
            r = n1 + n2;
        }
        else{
            r = n1 * n2;
        }
    }
    cout << endl << r << endl;
    return 0;
}
