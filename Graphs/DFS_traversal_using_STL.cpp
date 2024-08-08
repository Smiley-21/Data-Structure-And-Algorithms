#include <bits/stdc++.h>
#define vv(datatype) vector<vector<datatype>>
#define p(b, c) pair<b, c>
#define v(a) vector<a>
#define vp(a, b) vector<pair<a, b>>
#define ll long long
#define loop(i, a, b) for (int i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define it(v) for (auto it = v.begin(); it != v.end(); it++)
using namespace std;

const int MOD = 1000000007;
void addEdge(v(int) adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSUtil(int u, v(int) adj[], v(bool) & visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < adj[u].size(); i++)
    {
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
    }
}
void DFS(v(int) adj[], int V)
{
    v(bool) visited(V, false);
    for (int u = 0; u < V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}
int main()
{
    int V;
    cin >> V;
    v(int) adj[V];
    loop(i, 0, V)
    {
        int a, b;
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    DFS(adj, V);

    return 0;
}