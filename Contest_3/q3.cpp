#include <bits/stdc++.h>

using namespace std;

int main(){

    long long x;
    cin >> x;
    long long y[x];


    for(int i =0 ; i< x; i++){
        cin >> y[i];
        long long h = 1;
        long long aux = 0;
        while(h < y[i]){
            h +=2;
            aux += h * 2;
        }

        cout << aux+2 - y[i] << endl;

        h = 0;
        
    }

    return 0;
}