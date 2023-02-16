#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n, ans, digit, reverse=0;
    cin>>n;
    ans=n;
    do{
        digit=n%10;
        reverse=(reverse*10)+digit;
        n=n/10;
    }while(n!=0);
        cout<<reverse<<"\n";
    if(ans==reverse)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}