#include <iostream>

using namespace std;

int main()
{
    int acu[15], na, cv, pos = 1;
    for(int x = 0; x < 15; x++){
        acu[x] = 0;
    }
    ingreso(na, cv);
    while(na != 0){
        acu[na - 1] += cv;
        ingreso(na, cv);
    }
    cout << endl << acu[9] << endl;
    for(int x = 0; x < 15; x++){
        if(acu[x] == 0){
            cout << x + 1 << endl;
        }
    }
    int mx = acu[0];
    for(int x = 0; x < 15; x++){
        if(acu[x] > mx){
            mx = acu[x];
            pos = x + 1;
        }
    }
    return 0;
}
