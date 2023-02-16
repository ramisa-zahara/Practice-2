#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n, ans, digit, reverse=0;
    cin>>n;
    ans=n;
    do{
        digit=n%10;
        reverse=(reverse*10)+digit;
        n=n/10;
    }while(n!=0);
        cout<<reverse<<"\n";
    if(ans==reverse)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    /* For example take 121
    n=121; ans=121 will be stored
    digit = (121%10)=1
    reverse=(0*10)+1
    n=121/10=12 ( this loop will execute untill n is not equal to zero.)
    if reverse is equal to n (which is stored in ans) then the number is a palindrome.
    */
}