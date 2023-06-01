#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int y = a/365;
    int m = (a - (y * 365))/30;
    int d = (a - (y*365)-(m*30));
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d<< " days" << endl;
    return 0;
}
