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

void invertir(char palabra[]){
    int n = 0;
    for(int x = 0; x < 25; x++){
        if(palabra[x] == '\0'){
            cout << " ";
            n = x;
            break;
        }
    }
    char word[n];
    int i = n;
    for(int x = 0; x < i; x++){
        n--;
        word[x] = palabra[n];
    }
    cout << endl << word << endl;
}
