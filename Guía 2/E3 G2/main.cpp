#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1 == n2){
        cout << endl << "Los numeros son iguales" << endl;
    }
    else{
        if(n1 > n2){
            cout << endl << "El numero mayor es " << n1 << endl;
        }
        else{
            cout << endl << "El numero mayor es " << n2 << endl;
        }
    }
    return 0;
}
