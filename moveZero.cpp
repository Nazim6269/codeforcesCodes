#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int a[] = {0,0,3,8,0};
    if(i<j){
        for(i = 0,j = 4; i<4; i++,j--){
        if(a[i] == 0){
            if(a[j] == 0){
                a[j-1] = a[i];
            }
            else{
                a[j] = a[i];
            }
        }
        else{
            if(a[j] == 0){
               continue;
            }
            else{
                continue;
            }
        }
    }
    }
    for(i = 0; i<4; i++){
        cout << a[i] << endl;
    }
    return 0;
}
