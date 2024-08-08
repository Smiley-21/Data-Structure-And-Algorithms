//Adjacdency List demonstration using set
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    set<int, greater<int>> *adjList;
};
Graph *createGraph(int V)
{
    Graph *graph = new Graph;
    graph->V = V;
    graph->adjList = new set<int, greater<int>>[V];
    return graph;
}

void addEdge(Graph *graph, int src, int dest)
{
    graph->adjList[src].insert(dest);
    graph->adjList[dest].insert(src);
}

void printGraph(Graph *graph)
{

    for (int i = 0; i < graph->V; i++)
    {
        set<int, greater<int>> lst = graph->adjList[i];
        cout << "\n"
             << "Adjacency list of vertex " << i << "\n";
        for (auto it = lst.begin(); it != lst.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
}

void searchedge(Graph *graph, int src, int dest)
{
    auto itr = graph->adjList[src].find(dest);
    if (itr == graph->adjList[dest].end())
    {
        cout << "\n"
             << "Edge from " << src << " to " << dest << " not found \n";
    }
    else
        cout << "\n"
             << "Edge from " << src << " to " << dest << " is found\n";
}
int main()
{
    int V = 6;

    Graph *graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    addEdge(graph,3, 0);

    printGraph(graph);
    searchedge(graph, 2, 1);
    searchedge(graph, 0, 3);

    return 0;
}