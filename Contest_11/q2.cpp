#include <bits/stdc++.h>

using namespace std;

int main(){
int a;
cin >> a;

if(a % 5 == 0){
    cout << a;
}

else{
    int result = a % 5;
    if(result >= 3){
        if(result == 3){
            cout << a + 2;
        }
        else{
            cout << a + 1;
        }
    }
    else{
        cout << a - result;
    }
}

}