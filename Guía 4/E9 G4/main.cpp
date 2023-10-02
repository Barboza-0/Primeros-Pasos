#include <iostream>

using namespace std;

int main()
{
    int c, ac, n, p;
    c = 0;
    ac = 0;
    for(int x = 0; x < 20; x++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(n > 18){
            ac += n;
            c++;
        }
    }
    p = ac / c;
    cout << endl << "El promedio de personas mayores de edad es de " << p << endl;
    return 0;
}
