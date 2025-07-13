#include <iostream>
#include <vector>
using namespace std;

const int V = 6; // number of vertices
vector<pair<int, int>> adj[V]; // adjacency list: {neighbor, weight}

int main() {
    // Add edges (undirected graph with weights)
    auto addEdge = [&](int u, int v, int w) {
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
    for(int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": ";
        for(auto edge : adj[i]) {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << endl;
    }
    
    int source = 0;
    int dist[V], visited[V];
    
    // Initialize
    for(int i = 0; i < V; i++) {
        dist[i] = 99999;
        visited[i] = 0;
    }
    dist[source] = 0;
    
    cout << "Dijkstra's Algorithm from vertex " << source << ":\n";
    
    for(int count = 0; count < V; count++) {
        // Find minimum distance vertex
        int minDist = 99999, u = -1;
        for(int v = 0; v < V; v++) {
            if(!visited[v] && dist[v] < minDist) {
                minDist = dist[v];
                u = v;
            }
        }
        
        if(u == -1) break;
        visited[u] = 1;
        
        // Update distances
        for(auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            if(!visited[v] && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }
    
    // Print results
    cout << "\nShortest distances:\n";
    for(int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": ";
        if(dist[i] == 99999) {
            cout << "No path\n";
        } else {
            cout << dist[i] << "\n";
        }
    }
    
    return 0;
}
