#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    cin >> s;

    int x, y;
    cin >> x >> y;
    x--;
    y--;

    char temp;

    temp = s[x];

    s[x] = s[y];

    s[y] = temp;

    cout << s;
    return 0;
}