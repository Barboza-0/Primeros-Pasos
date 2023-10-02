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

int contenida(char palabra[]){
    int i = 0;
    for(int x = 0; x < 25; x++){
        if(palabra[x] == '\0'){
            i = x;
            break;
        }
        else{
            i = x;
        }
    }
    if(i < 2){
        return 0;
    }
    else{
        return 1;
    }
}
