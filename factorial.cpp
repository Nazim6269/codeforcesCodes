#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int mult = 1,N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        if (N<=20 && N>=0)
        {
            for(int i=1 ; i<=N; i++)
            {
                mult = mult * i;
            }
            cout << mult <<endl;
            mult = 1;
        }

    }
    return 0;
}
