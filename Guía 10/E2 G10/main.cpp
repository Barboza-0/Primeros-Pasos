#include <iostream>

using namespace std;

int main()
{
    char palabra[25], letra;
    int pos = 0;
    cout << "Ingrese una palabra: ";
    gets(palabra);
    cout << "Ingrese la posicion de la letra a ingresar: ";
    cin >> pos;
    cout << "Ingrese la letra para agregar: ";
    cin >> letra;
    for(int x = 24; x >= pos; x--){
        palabra[x] = palabra[x - 1];
    }
    palabra[pos - 1] = letra;
    cout << endl << palabra << endl;
    return 0;
}
