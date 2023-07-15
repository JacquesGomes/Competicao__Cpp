#include <bits/stdc++.h>

using namespace std;

int main(){

    int x; 
    cin >> x;

    for (int i = 0; i<x; i++){
        int y;
        cin >> y;

        map<char, int> vals;
        map<char, int> valscons;

        string qq;
        cin >> qq;

        set<char> um;

        for(int j = 0; j<qq.size(); j++){
            um.insert(qq[j]);
            if(qq[j] == qq[j+1]){
                valscons[qq[j]] += 1;
            }
            vals[qq[j]]++;

        }

        int flag = 0;

        for(set<char>::iterator it = um.begin(); it!=um.end();++it){
            if(vals[*it] > 1 && valscons[*it] == 0 || valscons[*it] > 0 && valscons[*it]+1 != vals[*it]){
                cout << "NO";
                flag = 1;
                break;
                }

        }
        if(flag == 0){
            cout << "YES";
        }

        cout << endl;

    }
    return 0;
}