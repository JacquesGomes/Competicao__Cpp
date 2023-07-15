#include <bits/stdc++.h>

using namespace std;

int main (){
    int x;
    cin >> x;

    char z;
    char y;
    int contador = 0;
    int total = 0;
    int flag = 0;
    cin >> y;
    char temp;
    for(int i = 0; i<x-1; i++){
        cin >> z;

        if(z == y){
            if(z == 'a'){
                contador++;
                flag = 1;
            }
        }

        if (flag == 1){
            if(z == 'b' || y == 'b'){
            total = total + contador;
            total++;
            contador = 0;
            flag = 0;
            }
            
        }
        temp = y;
        y = z;

    }
    if(y =='a' && temp == 'a'){
        total+= contador;
        total++;

    }
    cout << total;


}