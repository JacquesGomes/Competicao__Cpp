/*pega o subarray, ordena ele, encontra o nosso número e pega o índice dele, imprime o índice menos 1 ou o próprio índice*/

#include <bits/stdc++.h>

using namespace std;

int main(){
int a;
cin >> a;
int n;
int in;



for(int i = 0; i<a; i++){
    cin >> n;
    int sum = 0;
    vector<int> arr;
vector<int> temp;
vector<int>::iterator it;
multiset<int> myset;
multiset<int> mysettemp;

    for(int i = 0; i<n; i++){
        cin >> in;
        arr.push_back(in);
        myset.insert(in);
        temp = arr;

        sort(temp.begin(), temp.end());
        it = search_n(temp.begin(), temp.end(), 1, in);
        if(it!=temp.end()){
            int size = myset.size();
            mysettemp = myset;
            mysettemp.erase(in);
            int size2 = mysettemp.size();
            size = size - size2;
            if(size > 1){
                sum += (it-temp.begin()) + size-1;
            }
            else{
            sum += (it-temp.begin());
            }

            size2 = 0;
            size = 0;
        }
        else{
            cout << 0;
        }

    }
    cout << sum << '\n';
    sum = 0;

}
}