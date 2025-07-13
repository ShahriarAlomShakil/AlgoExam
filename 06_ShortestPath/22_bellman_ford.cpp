#include <iostream>
#include <vector>
using namespace std;

const int V = 5; // number of vertices
vector<pair<int, int>> adj[V]; // adjacency list: {neighbor, weight}

int main() {
    int source = 0;
    
    // Add edges (directed graph with weights)
    auto addEdge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
    };
    
    // Build the graph
    addEdge(0, 1, -1);
    addEdge(0, 2, 4);
    addEdge(1, 2, 3);
    addEdge(1, 3, 2);
    addEdge(1, 4, 2);
    addEdge(3, 2, 5);
    addEdge(3, 1, 1);
    addEdge(4, 3, -3);
    
    cout << "Graph (Adjacency List with weights):\n";
    for(int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": ";
        for(auto edge : adj[i]) {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << endl;
    }
    
    // Create edge list from adjacency list for Bellman-Ford
    vector<vector<int>> edges;
    for(int i = 0; i < V; i++) {
        for(auto& edge : adj[i]) {
            edges.push_back({i, edge.first, edge.second});
        }
    }
    
    // Distance array
    vector<int> dist(V, 99999);
    dist[source] = 0;
    
    
    cout << "Bellman-Ford Algorithm:\n";
    
    // Relax edges V-1 times
    for(int i = 0; i < V-1; i++) {
        for(auto& edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            if(dist[u] != 99999 && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    
    // Check for negative cycles
    bool hasNegativeCycle = false;
    for(auto& edge : edges) {
        int u = edge[0], v = edge[1], w = edge[2];
        if(dist[u] != 99999 && dist[u] + w < dist[v]) {
            hasNegativeCycle = true;
            break;
        }
    }
    
    if(hasNegativeCycle) {
        cout << "Negative cycle detected!\n";
    } else {
        cout << "Shortest distances from vertex " << source << ":\n";
        for(int i = 0; i < V; i++) {
            cout << "To vertex " << i << ": ";
            if(dist[i] == 99999) cout << "No path\n";
            else cout << dist[i] << "\n";
        }
    }
    
    return 0;
}
