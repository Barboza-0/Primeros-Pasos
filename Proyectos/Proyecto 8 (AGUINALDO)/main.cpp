#include <iostream>
#include "funcion.h"
#include <windows.h>

using namespace std;

int main()
{
    system("COLOR F0");
    cuadro(0, 0, 119, 26); cuadro(1, 1, 118, 3);
    cursor(56, 2); cout << "AGUINALDO";
    float meses[12], t;
    cursor(43, 11); cout << "Ingrese el sueldo bruto de cada mes";
    cursor(52, 13); cout << "Diciembre: "; cin >> meses[0]; cursor(52, 13); cout << "                    "; cursor(54, 13); cout << "Enero: "; cin >> meses[1]; cursor(54, 13); cout << "                    "; cursor(55, 13); cout << "Febrero: "; cin >> meses[2]; cursor(55, 13); cout << "                    "; cursor(56, 13); cout << "Marzo: "; cin >> meses[3]; cursor(56, 13); cout << "                    "; cursor(56, 13); cout << "Abril: "; cin >> meses[4]; cursor(56, 13); cout << "                    "; cursor(57, 13); cout << "Mayo: "; cin >> meses[5]; cursor(57, 13); cout << "                    "; cursor(56, 13); cout << "Junio: "; cin >> meses[6]; cursor(56, 13); cout << "                    "; cursor(56, 13); cout << "Julio: "; cin >> meses[7]; cursor(56, 13); cout << "                    "; cursor(56, 13); cout << "Agosto: "; cin >> meses[8]; cursor(56, 13); cout << "                    "; cursor(54, 13); cout << "Septiembre: "; cin >> meses[9]; cursor(54, 13); cout << "                    "; cursor(55, 13); cout << "Octubre: "; cin >> meses[10]; cursor(55, 13); cout << "                    "; cursor(52, 13); cout << "Noviembre: "; cin >> meses[11];
    procesoAguinaldo(t, meses);
    cursor(49, 22); cout << "El aguinaldo es de " << t;
    cursor(0, 26); return 0;
}
