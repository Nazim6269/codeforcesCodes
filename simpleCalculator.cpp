#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    long long int X,Y;
    cin >> X >> Y ;
    if(X >= 1 && Y<= pow(10,5)){
        cout << X <<" + "<< Y <<" = " << (X + Y) << endl << X <<" * "<< Y<<" = " << (X * Y)<< endl << X <<" - " << Y << " = " << (X - Y)<< endl ;
    }
    return 0;
}
