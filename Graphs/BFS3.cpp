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
const int MOD = 1000000007;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
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
void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    loop(i, 0, V)
    {
        visited[i] = false;
    }
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
int main()
{
    Graph g(4);
    int n;
    cout << "Enter the no of vertex in Graph : ";
    cin >> n;

    loop(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }
    g.BFS(2);

    return 0;
}