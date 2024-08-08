#include <bits/stdc++.h>
#define vii vector<vector<int>>
#define p pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define ll long long
#define loop(i, a, b) for (int i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define it(v) for (auto it = v.begin(); it != v.end(); it++)
using namespace std;

class Graph
{
public:
    map<int, bool> visited;
    map<int, list<int>> adj;
    void addedge(int v, int w);
    void DFS(int V);
};
void Graph::addedge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if (!visited[*it])
            DFS(*it);
    }
}

const int MOD = 1000000007;
int main()
{
    Graph g;
    int a, b, n,s;
    cout<<"Enter the no of vertex in the Graph";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        g.addedge(a, b);
    }
    cout<<"Enter the starting vertex  : ";
    cin>>s;
    
    g.DFS(s);

    return 0;
}