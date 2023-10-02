#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1 < n2){
        cout << endl << "El menor es " << n1 << endl;
    }
    else{
        cout << endl << "El menor es " << n2 << endl;
    }
    return 0;
}
