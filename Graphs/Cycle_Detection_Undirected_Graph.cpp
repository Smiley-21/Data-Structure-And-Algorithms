#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    void addEdge(int v, int w);
    Graph(int V);
    bool isCycle();
    bool isCycleUtil(int v, bool *visited, int parent);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::isCycle()
{
    bool *visited = new bool[V];

    memset(visited, 0, V);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            if (isCycleUtil(i, visited, -1))
                return true;
    }

    return false;
}
bool Graph::isCycleUtil(int v, bool *visited, int parent)
{
    visited[v] = true;
    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if (!visited[*it])
        {
            if (isCycleUtil(*it, visited, v))
                return true;
        }
        else if (*it != parent)
            return true;
    }
    return false;
}

int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contains cycle\n";
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contains cycle\n";

    return 0;
}