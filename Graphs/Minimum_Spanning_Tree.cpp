/*
Given an undirected and connected graph G(V,E) , a spanning tree of the graph
G is a tree that spans G (that is, it includes every vertex of G)
ans is  a subgraph of G (every edge in the tree belongs to G).
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;

    return find_set(parent[v]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int32_t main()
{
    for (int i = 0; i < N; i++)
    {
        make_set(i);
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int w, u, v;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto i : edges)

    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);

        if (x == y)
            continue;
        else
        {
            cout << u << " " << v << "\n";
            union_set(u, v);
            cost += w;
        }
    }
    cout<<"\n"<<cost;

    return 0;
}