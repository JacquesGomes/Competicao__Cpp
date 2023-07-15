#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x, y;

    cin >> x >> y;
    map<int, int> result;

    int row[x];
    int z;
    int col[y];

    set<int> conj;

    for(int i = 0; i<x; i++){
        cin >> z;
        row[i] = z; 
    }

    for(int i = 0; i<y; i++){
        cin >> z;
        col[i]=z;
        
    }

    for(int i = x-1; i>=0; i--){
        conj.insert(row[i]);
        result[i] = conj.size();
    }

    for(int i = 0; i<y;i++){
        cout << result[col[i]-1] << endl;
    }

    return 0;
}