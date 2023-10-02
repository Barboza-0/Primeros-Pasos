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

int cadenaIgual(char palabraI[], char palabraII[]){
    int cc = 0, c = 0;
    for(int x = 0; x < 25; x++){
        if(palabraI[x] == '\0'){
            c = x + 1;
            break;
        }
    }
    for(int x = 0; x < c; x++){
        if(palabraI[x] == palabraII[x]){
            cc++;
        }
    }
        if(cc == c){
            return 1;
        }
        else{
            return 0;
    }
}
