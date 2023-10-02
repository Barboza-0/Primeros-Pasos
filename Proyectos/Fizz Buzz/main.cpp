#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    int lista[100];
    for(int x = 0; x < 100; x++){
        lista[x] = x + 1;
    }
    for(int y = 0; y < 100; y++){
        if(lista[y] % 3 == 0 && lista[y] % 5 == 0){
            cout << "Fizz Buzz" << endl;
        }
        else{
            if(lista[y] % 5 == 0){
                cout << "Buzz" << endl;
            }
            else{
                if(lista[y] % 3 == 0){
                    cout << "Fizz" << endl;
                }
                else{
                    cout << lista[y] << endl;
                }
            }

        }
    }
    return 0;
}
