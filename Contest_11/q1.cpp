#include <bits/stdc++.h>

using namespace std;

int main(){
long long int a,b;
cin >> a >> b;
long long int result = a / b;

if (a % b == 0){
    cout << result << endl;
}
else{
    result++;
    cout << result << endl;
}

}