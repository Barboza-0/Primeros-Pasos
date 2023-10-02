#include <iostream>

using namespace std;

int main()
{
    int c = 0, n;
    cout << "Ingrese un numero: ";
    cin >> n;
    while(n >= 18){
        c++;
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << "Hay " << c << " mayores de edad." << endl;
    return 0;
}
