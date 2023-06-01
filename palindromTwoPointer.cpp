#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	string str;
	str = to_string(num);
	int i,j;

	for(i = 0,j = str.size()-1; i < str.size(); i++,j--){
		if(i > j){
			break;
		}
		if(str[i] == str[j]){
			continue;
		}
		else{
			cout << "Not Palindrom!" << endl;
			num = -1;
			break;
		}
	}
	if(num == -1){
        for(j = str.size()-1; j >= 0;j--){
            if(str[j] != '0' ){
                cout << str[j];
            }
        }
        return 0;
	}

	cout << num << endl << "Palindrom!" << endl;


	return 0;
}
