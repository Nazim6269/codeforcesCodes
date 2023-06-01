#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t,i,j;
	cin >> t;
	long long int ara[t];
	long long fact = 1;
	for( i = 0; i < t; i++){
		cin >> ara[i];
	}

	for( i = 0; i < t; i++){
		for( int j = 1; j <= ara[i]; j++){
			fact *= j;
		}
		cout << fact << endl;
		fact = 1;
	}
	return 0;
}

