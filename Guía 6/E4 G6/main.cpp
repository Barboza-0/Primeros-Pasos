#include <iostream>

using namespace std;

int main()
{
    int np, cp, pp, ht, ctp = 0, trc = 0;
    char tav;
    cout << "Ingrese el numero de paquete: ";
    cin >> np;
    cout << "Ingrese la cantidad de personas incluidas: ";
    cin >> cp;
    cout << "Ingrese el precio por persona: ";
    cin >> pp;
    cout << "Ingrese las horas totales de actividades: ";
    cin >> ht;
    cout << "Ingrese el tipo de aventura: ";
    cin >> tav;
    int hi = ht;
    char act = tav;
    while(np != 0){
        int tavac = tav, cpv = 0, mi = 0, trc = 0, r;
        while(tav == tavac){
            cpv++;
            ctp += cp;
            r = pp * cp;
            trc += r;
            if(r > mi){
                mi = r;
            }
            if(ht < hi){
                hi = ht;
                act = tavac;
            }
            cout << "Ingrese el numero de paquete: ";
            cin >> np;
            cout << "Ingrese la cantidad de personas incluidas: ";
            cin >> cp;
            cout << "Ingrese el precio por persona: ";
            cin >> pp;
            cout << "Ingrese las horas totales de actividades: ";
            cin >> ht;
            cout << "Ingrese el tipo de aventura: ";
            cin >> tav;
        }
        cout << endl << "La cantidad de paquetes vendidos es: " << cpv << endl;
        cout << "La venta con mayor importe fue " << mi << endl;
        cout << "El total de venta recaudado fue " << trc << endl;
    }
    cout << "La cantidad total de personas ingresaron en la temporada fue de " << ctp << endl;
    cout << "El paquete con menos horas incurridas fue " << hi << " en la actividad "  << act << endl;
    return 0;
}
