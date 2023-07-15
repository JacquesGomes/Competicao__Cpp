#include <bits/stdc++.h>

using namespace std;

int main (){
    int x;
    cin >> x;
    int arr[x];
    int total = 0;
    int fin = 0;
    int temp = 0;
    for(int i =0 ; i<x; i++){
        cin >> arr[i];

        temp = temp + arr[i];
        fin = max(fin, temp);

    }

    cout << fin + 100;
}