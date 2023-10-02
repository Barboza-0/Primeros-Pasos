#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vc[20], va[20];
    bool vb[12];
    float vp[20];
    carga(vc, vp);
    inicial(20, va);
    negativo(vb);
    proceso(vc, vp, va, vb);
    fa(vc, va);
    fb(vb);
    fc(vc, va);
    return 0;
}
