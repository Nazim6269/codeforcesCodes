#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout << "How many items wants to Add to array: ";
    cin >> size;
    int a[size],i;
    cout << "Now add " << size << " items: ";
    for(int i=0;i<size;i++){

      cin >> a[i];
    }
    int ara[7];
    int k = 0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(a[i] == a[j]){
                ara[k] = j;
                k++;
                break;
            }
        }
    }
    if(k == 0){
        cout << "Sorry !!There is no duplicate!!" << endl;
        return 0;
    }
    int ara2[k];
    for(int i=0;i<k;i++){
      ara2[i] = ara[i];
    }
    sort(ara2,ara2 + k);
    cout <<"First Duplicate Number is : " << a[ara2[0]] << endl;
    return 0;
}
