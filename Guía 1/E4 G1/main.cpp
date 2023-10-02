#include <iostream>

using namespace std;

int main()
{
    float d, v, t;
    cout << "Ingrese la distancia en kilometros a su punto de llegada: ";
    cin >> d;
    cout << "Ahora ingrese la velocidad en promedio a la que viaja: ";
    cin >> v;

    t = d / v;

    cout << endl << "El tiempo estimado para llegar es de: " << t << " Horas." << endl;


    return 0;
}
