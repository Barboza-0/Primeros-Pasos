#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese la nota del primer parcial: ";
    cin >> n1;
    cout << "Ingrese la nota del segundo parcial: ";
    cin >> n2;

    if(n1 < 6 || n2 < 6){
        cout << endl << "Debe recuperar" << endl;
    }
    else{
        if(n1 < 8 || n2 < 8){
            cout << endl << "Rinde examen final" << endl;
        }
        else{
            cout << endl << "Aprobacion directa" << endl;
        }
    }
    return 0;
}
