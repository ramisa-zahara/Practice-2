#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int sum=0;
    for(int i=1; i<=n; i++){
        string str= to_string(i);

        int sum_digit=0;
        for(int i=0; i<str.size(); i++){
            sum_digit+= str[i]-'0';
        }

        if(sum_digit>=a and sum_digit<=b)
            sum+=i;
    }
    cout<<sum<<"\n";

    return 0;
}