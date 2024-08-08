#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    Graph(int V);

public:
    void addEdgeDirected(int v, int w);
    void addEdgeUndirected(int v, int w);
    bool IsCyclic();
    bool DFSUtil(int u, int color[]);
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdgeDirected(int v, int w)
{
    adj[v].push_back(w);
}
void Graph:: addEdgeUndirected(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::IsCyclic()
{
    for(int i=0; i<V; i++)
    {

    }
}