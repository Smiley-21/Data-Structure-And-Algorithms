#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void fillOrder(int v, bool visited[], stack<int> &st);
    void DFSUtil(int v, bool visited[]);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void printSCCs();
    Graph getTranspose();
};
Graph ::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
        if (!visited[*it])
            DFSUtil(*it, visited);
}

Graph Graph::getTranspose()
{
    Graph g(V);
    for (int i = 0; i < V; i++)
    {
        list<int>::iterator it;
        for (it = adj[i].begin(); it != adj[i].end(); ++it)
            g.adj[*it].push_back(i);
    }
    return g;
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::fillOrder(int v, bool visited[], stack<int> &st)
{
    visited[v] = true;
    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)

        if (!visited[*it])
            fillOrder(*it, visited, st);

    st.push(v);
}

void Graph::printSCCs()
{
    stack<int> st;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            fillOrder(i, visited, st);

    Graph gr = getTranspose();
    for (int i = 0; i < V; i++)
        visited[i] = false;

    while (!st.empty())
    {
        int v = st.top();
        st.pop();
        if (visited[v] == false)
        {
            gr.DFSUtil(v, visited);
            cout << endl;
        }
    }
}

int main()
{
    int n, m, a, b;
    cout << "Enter the no of vertices in the Graph : ";
    cin >> n;
    Graph g(n);
    cout << "Enter the no of edges in the Graph : ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g.addEdge(a,b);
    }
    cout << "Following are strongly connected components in "
            "given graph \n";
    g.printSCCs();

    return 0;
}