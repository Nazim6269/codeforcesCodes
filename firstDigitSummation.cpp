#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int M,N,temp,temp_1,sum;
    cin >> M >>N ;
    temp = M - ((M/10)*10);
    temp_1 = N - ((N/10)*10);
    sum = temp + temp_1;
    cout << sum;
    return 0;
}
