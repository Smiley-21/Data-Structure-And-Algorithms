#include <bits/stdc++.h>
using namespace std;

struct Edge
{

    int src, dest, weight;
};
// a structure to represent  a connected, directed and wighted graph
struct Graph
{
    int V, E;
    struct Edge *edge;
};

struct Graph *createGraph(int V, int E)
{
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];

    return graph;
};

void printArr(int dist[], int n)
{
    cout << "Vertex Distance from Source \n";
    for (int i = 0; i < n; ++i)
    {
        cout << i << "\t" << dist[i] << "\n";
    }
}

void BellmanFord(struct Graph *graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];
    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if (dist[u] > dist[v] + weight && dist[u] != INT_MAX)
                dist[v] = dist[u] + weight;
        }
    }
    // Check for negative weight cycles ..........If we get a shorter path
    // then there is a cycle
    for (int i = 0; i < E; i++)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u]+ weight < dist[v] )
        {
            cout << "Graph contains a negative weight cycle\n";
           
        }
    }
    printArr(dist,V);
    return ;
}

int32_t main()
{
    int V, E, source;
    cout << "Enter the no of vertex and edges :";
    cin >> V >> E;
    struct Graph *graph = createGraph(V, E);
    for (int i = 0; i < E; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph->edge[i].src = a;
        graph->edge[i].dest = b;
        graph->edge[i].weight = c;
    }
    cout << "Enter source :";
    cin>>source;
    BellmanFord(graph, source);

    return 0;
}