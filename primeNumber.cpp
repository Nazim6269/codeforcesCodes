#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(1 == prime(n)){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}
