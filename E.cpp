#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
        int maximum= -INT_MAX;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x>maximum)
             maximum=x;
            }
        cout<<maximum<<"\n";
    
}