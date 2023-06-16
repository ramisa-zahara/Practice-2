#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int binary_one =0;
        while(n > 0){
            int last_number = n%2;
            if(last_number == 1){
                binary_one++;
            }
            int eliminate_last_number = n/2;
            n= eliminate_last_number;
        }

        int decimal=0;
        for(int i=1; i<=binary_one; i++){
            decimal= decimal*2 +1;
        }

        cout<<decimal<<"\n";

    }
    return 0;
}