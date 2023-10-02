#include <iostream>

using namespace std;

int main()
{
    int a, f, e;
    cout << "Por favor, ingrese el año actual: ";
    cin >> a;
    cout << "Ahora ingrese el año de su nacimiento: ";
    cin >> f;

    e = a - f;

    cout << endl << "Su edad es de: " << e << " años" << endl;

    return 0;
}
