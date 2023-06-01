#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ara[n];
    int i,count_1 = 0,count_2 = 0,count_3 = 0,count_4 = 0;
    for(i = 0;i<n;i++){
       cin >> ara[i];
    }
    for(i = 0;i<n;i++){
        if(ara[i]%2 == 0)
        {
            count_1++;
       }
       else{
        count_2++;
       }
    }
    for(i = 0;i<n;i++){
        if(ara[i]>0)
        {
            count_3++;
        }
       else if(ara[i]<0){
        count_4++;
       }
    }
     cout << "Even: " << count_1 << endl;
     cout << "Odd: " << count_2 << endl;
     cout << "Positive: " << count_3 << endl;
     cout << "Negative: " << count_4 << endl;
    return 0;
}


