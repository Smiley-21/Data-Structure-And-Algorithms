#include <bits/stdc++.h>
using namespace std;

struct Graph
{

    int V;
    unordered_set<int> *adjList;
};
Graph *createGraph(int V)
{
    Graph *graph = new Graph;
    graph->V = V;
    graph->adjList = new unordered_set<int>[V];

    return graph;
}

void addEdge(Graph *graph, int src, int dest)
{
    graph->adjList[src].insert(dest);
    graph->adjList[dest].insert(src);
}

void printGraph(Graph *graph)
{
    for (int i = 0; i < graph->V; ++i)
    {
        unordered_set<int> lst = graph->adjList[i];
        cout << "\nAdjacency List of vertex " << i << "\n";
        for (auto it = lst.begin(); it != lst.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << "\n";
    }
}
void SearchEdge(Graph *graph, int src, int dest)
{
    auto itr = graph->adjList[src].find(dest);
    if (itr == graph->adjList[src].end())
    {
        cout << "\nEdge from vertex " << src << " to " << dest << " is not found";
    }
    else
        cout << "\nEdge from vertex " << src << " to " << dest << " is found";
}

int main()
{
    int V = 5;
   struct Graph *graph = new Graph;
    graph=createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);

    SearchEdge(graph, 2, 1);
    SearchEdge(graph, 0, 3);
    return 0;
}