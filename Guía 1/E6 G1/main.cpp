#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, p;
    cout << "Ingrese la primer nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;
    cout << "Ingrese la tercer nota: ";
    cin >> n3;

    p = (n1+n2+n3)/3;

    cout << endl << "El promedio de las notas ingresadas es de: " << p << endl;

    return 0;
}
