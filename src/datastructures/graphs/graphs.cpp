#include <iostream>
#include <vector>
#include <algorithm>

#include "include/graphs.hpp"

/* A utility function to add an edge in an undirected graph. */
void graph_addedge(std::vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
  
/* A utility function to remove an edge in an undirected graph */
void graph_removeedge(std::vector<int> adj[], int u, int v)
{
    adj[u].erase(std::remove(adj[u].begin(), adj[u].end(), v), adj[u].end());
    adj[v].erase(std::remove(adj[v].begin(), adj[v].end(), u), adj[v].end());
    
}
/* A utility function to print the adjacency list representation of graph */
void graph_print(std::vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        std::cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           std::cout << "-> " << x;
        printf("\n");
    }
}
  
int main()
{
    int V = 5;
    std::vector<int> adj[V];
    graph_addedge(adj, 0, 4);
    graph_addedge(adj, 0, 1);
    graph_addedge(adj, 1, 2);
    graph_addedge(adj, 1, 3);
    graph_addedge(adj, 1, 4);
    graph_addedge(adj, 2, 3);
    graph_addedge(adj, 3, 4);
    graph_print(adj, V);
    std::cout<<"After REMOVAL\n";
    graph_removeedge(adj, 2, 3);
    graph_removeedge(adj, 3, 4);
    graph_print(adj, V);
    
    return 0;
}