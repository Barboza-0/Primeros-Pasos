#include <iostream>

using namespace std;

int main()
{
    int a, f, e;
    cout << "Por favor, ingrese el a�o actual: ";
    cin >> a;
    cout << "Ahora ingrese el a�o de su nacimiento: ";
    cin >> f;

    e = a - f;

    cout << endl << "Su edad es de: " << e << " a�os" << endl;

    return 0;
}
