#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    string s = to_string(a*b*c*d);
    int s_size = s.size();
    cout << s[s_size - 2] <<  s[s_size -1];
    return 0;
}
