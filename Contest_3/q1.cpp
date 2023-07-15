#include <bits/stdc++.h>

using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    int x[2][2];

    cin >> x[0][0];
    cin >> x[0][1];
    
    cin >> x[1][0];
    cin >> x[1][1];

    cout << x[r-1][c-1];
    return 0;
}