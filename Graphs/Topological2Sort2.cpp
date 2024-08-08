#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void topologicalSortUtil(int v, bool *visited, stack<int> &st);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void topologicalSort();
};

Graph ::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(v);
}
void Graph::topologicalSortUtil(int v, bool *visited, stack<int> &st)
{
    visited[v] = true;
    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if (!visited[*it])
            topologicalSortUtil(*it, visited, st);
    }
    st.push(v);
}

void Graph::topologicalSort()
{
    stack<int> st;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    int n, m;
    cout << "Enter the no of vertex : ";
    cin >> n;
    cout << "Enter the no of edges : ";
    cin >> m;

    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }
    g.topologicalSort();

    return 0;
}