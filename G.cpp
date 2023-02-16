#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long factorial=1;
            for(int i=1;i<=n;i++){
                factorial*=i;
            }
            cout<<factorial<<"\n";
    }
    return 0;
}