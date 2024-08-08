#include <bits/stdc++.h>
using namespace std;
enum Color
{
    White,
    Gray,
    Black
};

class Graph
{
    int V;
    list<int> *adj;
    bool DFSUtil(int v, int color[]);

public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isCycle();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

bool Graph::DFSUtil(int u, int color[])
{
    color[u] = Gray;
    list<int>::iterator it;
    for (it = adj[u].begin(); it != adj[u].end(); ++it)
    {
        if (color[*it] == Gray)
            return true;

        if (color[*it] == White && DFSUtil(*it, color))
        return true;
    }
    color[u] = Black;
}

bool Graph::isCycle()
{
    int *color = new int[V];
    for (int i = 0; i < V; i++)
        color[i] = White;

    for (int i = 0; i < V; i++)
    {
        if (color[i] == White)
            if (DFSUtil(i, color))
                return true;

        return false;
    }
}

int main()
{
    int n, m;
    cout << "Enter the no number of vertex : ";
    cin >> n;
    Graph g(n);
    cout << "Enter the no edges :";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }
    if (g.isCycle())
        cout << "Graph contains cycle \n";
    else
        cout << "Graph doesn't contains cycle \n";

    return 0;
}
