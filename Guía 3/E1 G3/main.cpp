#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if(n % 5 == 0){
        cout << endl << "Es multiplo de 5" << endl;
    }
    else{
        cout << endl << "No es multiplo de 5" << endl;
    }
    return 0;
}
