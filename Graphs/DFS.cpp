#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];
void dfs(int node, int final)
{
    // preorder
    vis[node] = true;
    cout << node << "->";
    if(node==final)
    {
        cout<<"\nGoal Node is reached\n";
        return;
    }
    // inorder
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (vis[*it])
            continue;
        else
        {
            dfs(*it, final);
        }
    }
    // postorder
}

int main()
{
    int n, m;
    cout<<"Enter the number of vertex in graph: "<<endl;
    cin >> n ;
    cout<<"Enter the number of edges in graph: "<<endl;
    cin>>m;
    cout<<"Enter edges of the graph: "<<endl;
    for (int i = 0; i < n; i++)
    {
        vis[i] = false;
    }
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int start,goal;
    cout<<"Enter the start node: "<<endl;
    cin>>start;
    cout<<"Enter the goal node: "<<endl;
    cin>>goal;
    dfs(start,goal);

    return 0;
}
