#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    char S;
    cin >> A >> S >> B;
    if(S == 43){
        cout << A + B;
    }
    else if(S == 45){
          cout << A - B;
    }
    else if(S == 42){
          cout << A * B;
    }
    else if(S == 47){
          cout << A / B;
    }
    return 0;
}
