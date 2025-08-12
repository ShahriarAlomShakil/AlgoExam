#include <iostream>
#include <vector>
using namespace std;

const int V = 6;    // number of vertices
vector<int> adj[V]; // adjacency list using array of vectors
int visited[V];
int stack[V];
int top = -1;

void dfs(int vertex)
{
    visited[vertex] = 1;

    // Visit all adjacent vertices
    for (int neighbor : adj[vertex])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor);
        }
    }

    // Push vertex to stack after visiting all its descendants
    stack[++top] = vertex;
}

int main()
{
    // Add edges (directed graph)
    auto addEdge = [&](int u, int v)
    {
        adj[u].push_back(v);
    };

    // Build the directed graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(3, 4);
    addEdge(4, 5);

    // Initialize visited array
    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
    }

    // Call DFS for all vertices
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }

    // Print topological order
    cout << "Topological Order (DFS-based): ";
    while (top >= 0)
    {
        cout << stack[top--] << " ";
    }
    cout << endl;

    return 0;
}
