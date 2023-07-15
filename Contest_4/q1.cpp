#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(x > 0 && y == 0){
        cout <<"Gold";
    }
    else if(x == 0 && y > 0){
        cout << "Silver";
    }
    else{
        cout << "Alloy";
    }
    return 0;
}