#include <iostream>

using namespace std;

int valid(char palabra[]){
    int i = 0;
    for(int x = 0; x < 25; x++){
        if(palabra[x] == ' '){
            i = 0;
            break;
        }
        else{
            i = 1;
        }
    }
    return i;
}
