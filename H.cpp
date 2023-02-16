#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    long long x;
    bool flag=0;
    cin>>x;
    if(x<2)//(x==0 || x==1)
    {
        flag=1;
        return 0;

    }
    for(int i=2;i<x;++i){
        if(x%i==0){
        flag=1;
        break;
        }
    }
    if(flag==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
}