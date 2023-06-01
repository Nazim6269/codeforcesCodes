#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	string str;
	str = to_string(num);

	string str2;
//	for(int i = str.size()-1; i >= 0; i--){
//		str2 += str[i];
//	}
//
//	for(int i  = 0; i < str.size(); i++){
//		if(str[i] != str2[i]){
//			cout << "Not palindrom!";
//			return 0;
//		}
//	}

	cout << "Palindrom!";
	return 0;
}
