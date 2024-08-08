#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> color;
bool isBi = true;
// Red 1 Blue 0

void col(int u, int curr)
{
    if (color[u] != -1 && color[u] != curr)
    {
        isBi = false;
        return;
    }
    color[u] = curr;
    if (vis[u])
        return;

    vis[u] = true;
    for (auto i : adj[u])
    {
        col(i, curr xor 1);
    }
}

int32_t main()
{
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, 0);
    color = vector<int>(n, -1);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            col(i, 0);
        }
    }
    if (isBi)
        cout << "Graph is Bipartite ";

    else
        cout << "Graph is not Bipartite";

    return 0;
}
