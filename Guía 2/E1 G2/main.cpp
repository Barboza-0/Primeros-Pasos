#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Inserte un numero: ";
    cin >> n;

    if(n > 10){
        cout << endl << "Es mayor a 10" << endl;
    }
    else{
        if(n == 10){
            cout << endl << "Es igual a 10" << endl;
        }
        else{
            cout << endl << "Es menor a 10" << endl;
        }
    }
    return 0;
}
