#include <iostream>

using namespace std;

int main()
{
    int p1 = 0, p2 = 0, p = 1, n, m1, m2, b = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    m1 = n;
    while(n != 0){
        if(n < m1){
            m2 = m1;
            m1 = n;
            p1 = p;
            p2 = p;
            b = 1;
        }
        else{
            if(!b){
                m2 = n;
                p1 = p;
                b = 1;
            }
            else{
                if(n < m2){
                    m2 = n;
                    p2 = p;
                }
            }
        }
        p++;
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    cout << endl << "El primer numero menor fue " << m1 << " en la posicion " << p1 << " el segundo numero menor fue " << m2 << " en la posicion " << p2 << endl;
    return 0;
}
