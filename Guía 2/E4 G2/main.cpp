#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if(n == 0){
        cout << endl << "Es cero" << endl;
    }
    else{
        if(n > 0){
            cout << endl << "Es positivo" << endl;
        }
        else{
            cout << endl << "Es negativo" << endl;
        }
    }
    return 0;
}
