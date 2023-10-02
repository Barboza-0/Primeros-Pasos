#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vna[300], vcus[300], vuv[300];
    float vpu[300], va[300];
    carga(vna, vcus, vpu, va);
    proceso(vna, vcus, vpu, va, vuv);
    noVentas(vna, va);
    return 0;
}
