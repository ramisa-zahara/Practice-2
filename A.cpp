#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
#define infLL 1e18
const int mx=512;
ll dist[mx][mx];


void FLOYD_WARSHALL(int n)
{
   for(int k=1;k<=n;++k)
   {
      for(int i=1;i<=n;++i)
      {
         for(int j=1;j<=n;j++)
         {
            if(dist[i][k]+dist[k][j]<dist[i][j])
            {
               dist[i][j]=dist[i][k]+dist[k][j];
            }
         }
      }

   }

   for(int i=1;i<=n;++i)
   {
      cout<<"Min cost "<<i<<endl;
      for(int j=1;j<=n;++j){
         cout<<dist[i][j]<<"\t";
      }
   }
}


int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=n;++i){
      for(int j=1;j<=n;++j)
      {
         if(i!=j)
            dist[i][j]=infLL;
      }
   }

   for(int i=1;i<=m;++i)
   {
      int u,v,w;
      cin>>u>>v>>w;
      dist[u][v]=min(dist[u][v], (ll)w);
      dist[v][u]=min(dist[v][u],(ll)w);
   }

   FLOYD_WARSHALL(n);

   return 0;
}
