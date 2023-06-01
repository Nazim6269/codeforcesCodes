#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int asize, int x){
    int left,right,mid;
    left = 0;
    right = asize - 1;
    while(left <= right){
        mid = (left + right)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
 }
