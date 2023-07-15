#include <bits/stdc++.h>
using namespace std;

int main(){
int n, a, b;
cin >> n >> a >> b;
int temp = 0;
map<int,int> ni;

for(int i = 0; i<n; i++){
cin >> temp;
ni[temp] = i;
}
int x = ni[a+b];
x++;
cout << x;

return 0;
}
