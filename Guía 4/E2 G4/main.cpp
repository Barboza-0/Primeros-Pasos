#include <iostream>

using namespace std;

int main()
{
    int c, n;
    c = 0;
    for(int x = 0; x < 20; x++){
            cout << "Ingrese un numero: ";
            cin >> n;
            if(n > 0){
                c++;
            }
        }
    cout << endl << "La cantidad de numeros positivos es de " << c << endl;
    return 0;
}
