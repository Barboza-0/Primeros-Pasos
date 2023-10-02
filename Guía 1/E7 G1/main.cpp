#include <iostream>

using namespace std;

int main()
{
    int mt, mc, md, pmc, pmd;
    cout << "Ingrese los metros cuadrados en su predio: ";
    cin >> mt;
    cout << "Ingrese los metros cuadrados cubiertos en el predio: ";
    cin >> mc;

    md = mt - mc;

    pmc = (mc * 100) / mt;
    pmd = (md * 100) / mt;

    cout << endl << "El porcentaje de metros cuadrados cubiertos es del " << pmc << "%" << " y el " << pmd << "%" << " es el porcentaje de metros descubiertos en el predio." << endl;

    return 0;
}
