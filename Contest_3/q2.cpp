#include <bits/stdc++.h>

using namespace std;

int main(){

    string x;
    cin >> x;
    int contador = 0;

    for(int i =0; i<x.size(); i++){
        if(x[i] == 'v'){
            contador++;
        }
        else{
            contador += 2;
        }
    }

    cout << contador;

    return 0;
}