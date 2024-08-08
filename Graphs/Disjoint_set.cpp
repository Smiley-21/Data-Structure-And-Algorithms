#include <bits/stdc++.h>
using namespace std;

class Disjoint_set
{
    vector<int> rank, parent,size;

public:
    Disjoint_set(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n+1,1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int findUParent(int n)
    {
        if (parent[n] == n)
            return n;
        return parent[n] = findUParent(parent[n]);
    }

    void UnionByRank(int u, int v)
    {
        int ul_pu = findUParent(u);
        int ul_pv = findUParent(v);
        if (ul_pu == ul_pv)
            return;
        if (rank[ul_pu] < rank[ul_pv])
            parent[ul_pu] = ul_pv;
        else if (rank[ul_pv] < rank[ul_pu])
            parent[ul_pv] = ul_pu;
        else
        {
            parent[ul_pv] = ul_pu;
            rank[ul_pu]++;
        }
    }

    void UnionBySize(int u, int v)
    {
        int ul_pu=findUParent(u);
        int ul_pv=findUParent(v);
        if(ul_pu==ul_pv)
        return ;
        else if(size[ul_pu]<size[ul_pv])
        {
            parent[ul_pu]=ul_pv;
            size[ul_pv]+=size[ul_pu];
        }
        else
        {
            parent[ul_pv]=ul_pu;
            size[ul_pu]+=size[ul_pv];
        }
    }

}; 
int main()
{
    Disjoint_set ds(7);
    //Checking by UnionByRank
    // ds.UnionByRank(1,2);
    // ds.UnionByRank(2,3);
    // ds.UnionByRank(4,5);
    // ds.UnionByRank(6,7);
    // ds.UnionByRank(5,6);
    // if(ds.findUParent(3)==ds.findUParent(5))
    // cout<<"Same\n";
    // else
    // cout<<"Not Same\n";

    // ds.UnionByRank(3,7);
    //   if(ds.findUParent(3)==ds.findUParent(5))
    // cout<<"Same\n";
    // else
    // cout<<"Not Same\n";

//Checking UnionBySize 
     ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);
    if(ds.findUParent(3)==ds.findUParent(5))
    cout<<"Same\n";
    else
    cout<<"Not Same\n";

    ds.UnionBySize(3,7);
      if(ds.findUParent(3)==ds.findUParent(5))
    cout<<"Same\n";
    else
    cout<<"Not Same\n";

  



    return 0;
}