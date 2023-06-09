#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    char c;
    cin>>c;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++){
        cin>>a[i];

        for(int j=0; j<a[i]; j++)
            cout<<c;
        
        cout<<"\n";
    }

    return 0;
}