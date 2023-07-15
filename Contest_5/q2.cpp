#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;
    cin >> n;
    string s;
    for(int i = 0 ; i < n; i++){
        int contador = 0;
        cin >> s;
        if(s[0] != 'c'){
            contador++;
        }

        if(s[1] != 'o'){
            contador++;
        }

        if(s[2] != 'd'){
            contador++;
        }

        if(s[3] != 'e'){
            contador++;
        }

        if(s[4] != 'f'){
            contador++;
        }

        if(s[5] != 'o'){
            contador++;
        }

        if(s[6] != 'r'){
            contador++;
        }

        if(s[7] != 'c'){
            contador++;
        }

        if(s[8] != 'e'){
            contador++;
        }

        if(s[9] != 's'){
            contador++;
        }

        cout << contador << endl;
    }

    return 0;
}