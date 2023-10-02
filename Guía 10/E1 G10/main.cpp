#include <iostream>

using namespace std;

int main()
{
    char palabra[25];
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    int x = 0, c = 0;
    while(palabra[x] != '\0'){
        if(palabra[x] == 'a'){
            c++;
        }
        x++;
    }
    cout << endl << "Hay " << c << " letras 'a' en la palabra " << palabra << endl;
    return 0;
}
