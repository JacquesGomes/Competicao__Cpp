
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){

    int n;
    cin >> n;
    int x, y, z;

    for(int i = 0; i<n; i++){

        vector<int> myset;

        cin >> x >> y >> z;

        myset.push_back(x);
        myset.push_back(y);
        myset.push_back(z);
        sort(myset.begin(), myset.end());
        cout << "Case " << i+1 << ": ";
        cout << myset.at(1) << endl;


    }

    return 0;
}