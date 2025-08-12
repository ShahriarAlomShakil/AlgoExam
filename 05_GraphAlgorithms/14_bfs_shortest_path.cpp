#include <iostream>
#include <vector>
using namespace std;

const int V = 6;    // number of vertices
vector<int> adj[V]; // adjacency list using array of vectors

int main()
{
    // Add edges (undirected graph)
    auto addEdge = [&](int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    };

    // Build the graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);
    addEdge(3, 4);
    addEdge(4, 5);

    int source = 0; // starting vertex

    // BFS using simple queue implementation with array
    int queue[V];
    int front = 0, rear = 0;
    int visited[V] = {0};
    int distance[V];

    // Initialize
    for (int i = 0; i < V; i++)
    {
        distance[i] = -1;
    }

    // Start BFS
    queue[rear++] = source;
    visited[source] = 1;
    distance[source] = 0;

    cout << "BFS Shortest Path from vertex " << source << ":\n";

    while (front < rear)
    {
        int current = queue[front++];

        // Visit all adjacent vertices
        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = 1;
                distance[neighbor] = distance[current] + 1;
                queue[rear++] = neighbor;
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances:\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Vertex " << i << ": ";
        if (distance[i] == -1)
        {
            cout << "Not reachable\n";
        }
        else
        {
            cout << "Distance = " << distance[i] << endl;
        }
    }

    return 0;
}
