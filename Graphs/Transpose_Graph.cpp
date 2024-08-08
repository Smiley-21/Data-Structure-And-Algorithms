#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj, int src, int dest)
{
    adj[src].push_back(dest);
}

void DisplayGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        cout << i << "-->";
        for (int j = 0; j < adj[i].size(); j++)
            cout << adj[i][j] << " ";
        cout << "\n";
    }
}

void TransposeGraph(vector<int> adj[], vector<int> transpose[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            addEdge(transpose, adj[i][j], i);
        }
    }
}

int main()
{
    int V;
    cout << "Enter the no of vertices in the Graph : ";
    cin >> V;
    vector<int> adj[V];
    int a, b, n;
    cout << "Enter the no of edges :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    DisplayGraph(adj, V);
    cout << "\n";
    vector<int> transpose[V];
    TransposeGraph(adj, transpose, V);
    DisplayGraph(transpose, V);
    return 0;
}
