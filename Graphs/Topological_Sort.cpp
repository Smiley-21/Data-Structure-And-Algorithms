#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, m;
    cin >> n >> m;
    int cnt=0;
    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]++;
    }
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            pq.push(i);
    }
    while(!pq.empty())
    {
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it: adj[x])
        {
            indegree[it]--;
            if(indegree[it]==0)
            pq.push(it);
        }

    }

    return 0;
}