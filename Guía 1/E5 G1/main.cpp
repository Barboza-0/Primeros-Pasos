#include <iostream>

using namespace std;

int main()
{
    float t, st;
    cout << "Ingrese la comision generada: ";
    cin >> t;

    st = (t * 0.05) + 15000;

    cout << endl << "El sueldo total es de: " << st << endl;

    return 0;
}
