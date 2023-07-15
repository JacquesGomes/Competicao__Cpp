#include <bits/stdc++.h>

using namespace std;

int main (){
    int x, y;
    int contador = 0;

    cin >> x >> y;

    if(x >= y){
        cout << 0;
    }

    else if(x + 10 >= y){
        cout << 1;
    }

    else{
        while(x < y){
            x += 10;
            contador++;
        }
        cout << contador;
    }
    return 0;
}