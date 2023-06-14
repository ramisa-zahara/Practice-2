#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row =1;
    for(int i=1; i<=n; i++){
        for(int j=row; j<= row+2; j++ ){
            cout<<j<<" ";
        }

        cout<<"PUM\n";

        row+=4;

    }
    return 0;
}