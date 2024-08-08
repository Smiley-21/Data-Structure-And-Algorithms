#include<bits/stdc++.h>
using namespace std;
//connected Component
/*
A connected component is a subgraph  in which any two vertices are connected 
to each other by paths, and which is connected to no additional vertices in the supergraph.


// Find number of component in graph and its size?
*/
vector<bool> vis;
int n, m;
vector<vector<int>>adj;
vector<int>component;
int get_Comp(int idx)
{
    if(vis[idx])
    return 0;

    vis[idx]=true;
    int ans=1;
    for(auto i: adj[idx])
    {
        if(!vis[i])
        {
            ans+=get_Comp(i);
            vis[i]=true;
        }
    }
    return ans;
}
int32_t main()
{
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n, 0);
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            component.push_back(get_Comp(i));
        }
    }
    for(auto i: component)
    {
        cout<<i<<" ";
    }
    

    return 0;
}