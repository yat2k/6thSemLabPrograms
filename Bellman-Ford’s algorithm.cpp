#include<bits/stdc++.h>
using namespace std;
const int INF = 100000;
int main()
{
  int n,m;
  cout<<"Enter number of vertex and edges";
cin>>n>>m;
vector<vector<int>>edges;
for(int i=0;i<m;i++)
{
  int u,v,w;
  cout<<"Enter the value of vertex edges and weights of graph";
cin>>u>>v>>w;
edges.push_back({u,v,w});
}
cout<<"Enter source vertex";
int src;cin>>src; 
vector<int>dist(n,INF);
dist[src]=0;
for(int i=0;i<n-1;i++)
{
for(auto e:edges)
{
   int u=e[0];
   int v =e[1];
   int w =e[2];
   dist[v]=min(dist[v],w + dist[u]);
}  
}
for(auto i :dist)
    cout<<i<<" ";
    cout<<"\n";
}  
