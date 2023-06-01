#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    long long int sum = 1;
    for(int i=1 ; i<=n ; i++){
        sum = sum * i;
    }
    return sum;
}
int main(){
    int t,n,sum;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> n;
        cout << fact(n)<<endl;
    }
    return 0;
}
