#include <iostream>

using namespace std;

int main()
{
    int n1, n2, s, r, m, d;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    s = n1 + n2;
    r = n1 - n2;
    m = n1 * n2;
    d = n1 / n2;

    cout << endl << "Los resultados de las operaciones son:" << endl << "Suma: " << s << endl << "Resta: " << r << endl << "Multiplicacion: " << m << endl << "Division: " << d << endl;

    return 0;
}
