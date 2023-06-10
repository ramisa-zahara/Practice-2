#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n == 0){
            cout<< 0 << "\n";
            continue;
        }

        while(n>0){
        int last_digit = n%10;
        cout<< last_digit <<" ";
        int without_last_digit = n/10;
        n= without_last_digit;
        }
        cout<<"\n";
    }
    return 0;
}