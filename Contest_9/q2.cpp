#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;



while(n > 0){
    int temp = 0;
    cin >> temp;
    string temp2;
    int result = 0;
    int number;

    map<int, int> ni;
    for(int i = 0; i < temp; i++){
        cin >> temp2;
        if(temp2.compare("LEFT") == 0){
            ni[i+1] = 1;
            result--;
        }
        else if (temp2.compare("RIGHT") == 0){
            ni[i+1] = 2;
            result++;
        }
        else if(temp2.compare("SAME")==0){
            cin >> temp2;
            cin >> number;



            if(ni[number] == 1){
                result--;
                ni[i+1] = 1;
            }
            else if(ni[number] == 2){
                ni[i+1] = 2;
                result++;
            }
            
        }

        
        
    }

    cout << result << "\n";

    n--;
}

return 0;
}
