#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
    int sum=0;

    if(n<=0 or m<=0)
     return 0;

    if(n>m)
    swap(n,m);

    for(int i=n; i<=m; i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<"\n";
    }

    return 0;


}