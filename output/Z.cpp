#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int k, s;
    cin>>k>>s;

    int count =0;

    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
            int z= s-x-y;
            if(z>=0 and z<=k)
                count ++;
        }
    }
    cout<<count<<"\n";
    return 0;
}