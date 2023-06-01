#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,i,j;
    cin >> num;
    string num_1;
    num_1 = to_string(num);
    for(i = 0,j = num_1.size()-1;i<num_1.size();i++,j--){
        if(i>j){
            break;
        }
        if(num_1[i] == num_1[j]){
            continue;
        }
        else{
            num = -1;
            break;
        }
    }
    if(num == -1){
        for(j = num_1.size(); j>=0; j--){
            if(num_1[j] != '0'){
                cout << num_1[j];
                continue;
            }
        }
        cout << endl << "NO";
         return 0;
    }
      cout << num_1 << endl << "YES";
      return 0;
}
