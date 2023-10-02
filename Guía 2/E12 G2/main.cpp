#include <iostream>

using namespace std;

int main()
{
    int n, h, m;
    cout << "Ingrese los minutos: ";
    cin >> n;

    m = 0;
    if(n > 59){
        n = n - 60;
        h++;
    }
    if(n >= 60){
        n = n - 60;
        h++;
    }
    else{
        m = n;
    }
    cout << endl << h << " Horas " << m << " minutos" << endl;
    return 0;
}
