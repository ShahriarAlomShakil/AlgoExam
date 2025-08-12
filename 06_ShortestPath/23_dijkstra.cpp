#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int V = 6;               // number of vertices
vector<pair<int, int>> adj[V]; // adjacency list: {neighbor, weight}

int main()
{
    // Add edges (undirected graph with weights)
    auto addEdge = [&](int u, int v, int w)
    {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    // Build the graph
    addEdge(0, 1, 4);
    addEdge(1, 2, 8);
    addEdge(2, 3, 7);
    addEdge(2, 5, 4);
    addEdge(3, 4, 9);
    addEdge(3, 5, 14);
    addEdge(4, 5, 10);

    cout << "Graph (Adjacency List with weights):\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Vertex " << i << ": ";
        for (auto edge : adj[i])
        {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << endl;
    }

    int source = 0;
    int dist[V];
    // Use set to get min distance vertex efficiently
    set<pair<int, int>> s; // {distance, vertex}
    bool visited[V] = {0};

    for (int i = 0; i < V; i++)
    {
        dist[i] = 99999;
    }
    dist[source] = 0;
    s.insert({0, source});

    cout << "Dijkstra's Algorithm from vertex " << source << ":\n";

    while (!s.empty())
    {
        auto it = s.begin();
        int u = it->second;
        s.erase(it);
        if (visited[u])
            continue;
        visited[u] = true;
        // Update distances
        for (auto &edge : adj[u])
        {
            int v = edge.first;
            int weight = edge.second;
            if (!visited[v] && dist[u] + weight < dist[v])
            {
                // If v already in set, remove the old pair
                s.erase({dist[v], v});
                dist[v] = dist[u] + weight;
                s.insert({dist[v], v});
            }
        }
    }

    // Print results
    cout << "\nShortest distances:\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Vertex " << i << ": ";
        if (dist[i] == 99999)
        {
            cout << "No path\n";
        }
        else
        {
            cout << dist[i] << "\n";
        }
    }

    return 0;
}
