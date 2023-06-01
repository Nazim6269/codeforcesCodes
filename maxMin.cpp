#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int A,B,C;
    cin >> A >> B >> C;

    if(A == B){
        if(C<A){
            cout << C << " " << A;
        }
        else{
            cout << A << " " << C;
        }
    }
    else if(B == C){
        if(A<C){
            cout << A << " " << C;
        }
        else{
            cout << C << " " << A;
        }
    }
    else if(C == A){
        if(B<A){
            cout << B << " " << A;
        }
        else{
            cout << A << " " << B;
        }
    }
    if((A<B) && (A<C)){
        if(B>C){
            cout << A << " " << B;
        }
        else{
            cout << A << " " << C;
        }
    }
    else if((B<C) && (B<A)){
        if(A>C){
            cout << B << " " << A;
        }
        else{
            cout << B << " " << C;
        }
    }
    else if((C<A) && (C<B)){
        if(A>B){
            cout << C << " " << A;
        }
        else{
            cout << C << " " << B;
        }
    }
    return 0;


}
