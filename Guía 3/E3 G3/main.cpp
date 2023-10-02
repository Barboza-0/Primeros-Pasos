#include <iostream>

using namespace std;

int main()
{
    int n1, n2, r;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n2 != 0){
        r = n1 / n2;
        cout << endl << r << endl;
    }
    else{
        cout << endl << "Imposible dividir entre 0" << endl;
    }
    return 0;
}
