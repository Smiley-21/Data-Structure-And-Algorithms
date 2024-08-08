#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adjm[], int u, int v)
{
    adjm[u].push_back(v);
    adjm[v].push_back(u);
}

void PrintGraph(vector<int> adj[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << "\nAdjacency list of vertex :" << i << "\nhead";
        for (auto x : adj[i])
        {
            cout << "->" << x;
        }
        cout << "\n";
    }
}

int main()
{
    int N=5;
    vector<int> adj[N];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    PrintGraph(adj, N);

    return 0;
}