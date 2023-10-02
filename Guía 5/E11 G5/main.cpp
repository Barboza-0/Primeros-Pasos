#include <iostream>

using namespace std;

int main()
{
    int n, cp = 0, cn = 0, cpa = 0, cpr = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    while(n != 0){
        if(n > 0){
            cp++;
        }
        else{
            cn++;
        }
        if(n % 2 == 0){
            cpa++;
        }
        int con = 0, j = 1;
        while(j <= n){
            if(n % j == 0){
                con++;
            }
            j++;
        }
        if(con == 2){
            cpr++;
        }
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << "La cantidad de primos es de " << cpr << ", la cantidad de numeros pares es de " << cpa << ", la cantidad de numeros positivos es de " << cp << " y la cantidad de numeros negativos es de " << cn << endl;
    return 0;
}
