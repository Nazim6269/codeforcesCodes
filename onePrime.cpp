#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,count = 0;;
    cin >> x;
    if(x>1 && x<100000){
        for(int i=2; i<x; i++){
        if(x%i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << "YES" ;
    }
    else{
        cout << "NO";
    }
    }
    return 0;
}
