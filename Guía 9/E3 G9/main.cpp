#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int vt[20], vc[100], vck[100], vcc[100];
    float vik[20], vtt[20], vnc[100];
    carga(vt, vik, vtt);
    carga0(vcc, vc, vck, vnc);
    proceso(vt, vik, vtt, vnc, vcc, vc, vck);
    return 0;
}
