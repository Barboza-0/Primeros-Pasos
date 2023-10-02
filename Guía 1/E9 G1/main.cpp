#include <iostream>

using namespace std;

int main()
{
    int m, h, t, pm, ph;
    cout << "Ingrese la poblacion femenina en la carrera de ciencias exactas: ";
    cin >> m;
    cout << "Ingrese la poblacion masculina en la carrera de ciencias exactas: ";
    cin >> h;

    t = m + h;
    pm = (m * 100) / t;
    ph = (h * 100) / t;

    cout << endl << "El porcentaje de mujeres es del " << pm << "%" << " Y en porcentaje de hombres es del " << ph << "%." << endl;

    return 0;
}
