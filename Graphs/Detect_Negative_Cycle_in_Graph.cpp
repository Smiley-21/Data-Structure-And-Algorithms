//Bellman Ford
#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
   

    public:
    Graph (int V);
    void addEdge(int v, int w, int weight);
    bool  isnegativeCycle();
    bool negative(int n, bool *visited, int weight);

};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int> [V];
}
void Graph::addEdge(int v, int w, int weight)
{
    adj[v].push_back(w);
}
bool Graph::isnegativeCycle()
{
    bool *visited=new bool[V];
    for(int i=0; i<V; i++)
    visited[i]=false;

    for(int i=0; i<V; i++)
    {
        if(!visited[i])
          if(negative(i,visited,weight))
    }
}



int main()
{
    int v,e,a,b, c;
    cout<<"Enter the no of vertices :";
    cin>>v;
    cout<<"Enter the no of edges : ";
    cin>>e;
    Graph g(v);
    for(int i=0; i<e; i++)
    {
        cin>>a>>b>>c;
       g.addEdge(a, b, c);
    }

    
}