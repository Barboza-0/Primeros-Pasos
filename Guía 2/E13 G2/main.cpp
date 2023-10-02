#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cout << "Ingrese los minutos: ";
    cin >> n;

    while(n >= 60){
        h++;
        n -= 60;
    }
    cout << endl << h << " Horas " << n << " minutos" << endl;
    return 0;
}
