#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,rem;
    cin >> n1 >> n2;
    do{
        rem = n2 % n1;
        n2 = n1;
        n1 = rem;
    }
    while(n1 !=0);
    cout << n2;

    return 0;
}
