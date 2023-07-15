#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;

    for(int i = 0; i <x; i++){

        int y;
        cin >> y;
        int arr[y];
        multiset<int> vals;
        map <int, int> mapp;
        for(int j = 0; j<y; j++){
            cin >> arr[j];
            vals.insert(arr[j]);
            mapp[arr[j]] = j;
            
        }

        int qq = vals.size();
        vals.erase(arr[0]);

        if(vals.size() == 1){
            set<int>::iterator it = vals.begin();
            cout << mapp[*it] + 1;
        }
        else{
            cout << mapp[arr[0]] + 1;
        }

        cout << endl;


    }
    return 0;
}