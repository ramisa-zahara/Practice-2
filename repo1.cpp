#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int d=(b-a)/c;
   int sum=d*c;
   if(sum>a and sum<b)
      cout<<sum<<"\n";
   else
      cout<<"-1\n";
   return 0;
}
