#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    bool ara[n];
    for(i = 0; i < n; i++){
        ara[i] = true;
    }
    for(i = 2; i<n; i++){
        if(ara[i] == true){
            for(j = i*i; i<=n; j+=i){
                ara[j] == false;
            }

        }
    }
    for(i = 2; i<=n; i++){
         if(ara[i] == true){
            cout << i << " ";
        }
       }
    return 0;
}
