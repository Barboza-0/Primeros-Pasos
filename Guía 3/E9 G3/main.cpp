#include <iostream>

using namespace std;

int main()
{
    int a, b, c, p;
    cout << "Ingrese 1/i5, 2/i7 o 3/i9: ";
    cin >> a;
    cout << "Ingrese 1/8 RAM, 2/16 RAM o 3/32 RAM: ";
    cin >> b;
    cout << "¿Ampliar la memoria a 1TB? 1/Si 0/No: ";
    cin >> c;

    switch(a){
    case 1:
        switch(b){
        case 1:
            p = 800;
            break;
        case 2:
            p = 900;
            break;
        default:
            p = 1000;
            break;
        }
        break;

    case 2:
        switch(b){
        case 1:
            p = 900;
            break;
        case 2:
            p = 1000;
            break;
        default:
            p = 1400;
            break;
        }
        break;

    default:
        switch(b){
        case 1:
            p = 1200;
            break;
        case 2:
            p = 1400;
            break;
        default:
            p = 2000;
            break;
        }
        break;
    }

    if(c == 1){
        p = p + 300;
    }
    cout << endl << p << endl;
    return 0;
}
