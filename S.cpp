#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sum=0;
        if(x>y)
        swap(x,y);

        for(int i=x+1 ;i<y; i++){
            if(i%2!=0)
            sum+=i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}