#include <iostream>
#include <vector>
using namespace std;

const int V = 6; // number of vertices
vector<int> adj[V]; // adjacency list using array of vectors
int visited[V];

void dfs(int vertex) {
    visited[vertex] = 1;
    cout << vertex << " ";
    
    // Visit all adjacent vertices
    for(int neighbor : adj[vertex]) {
        if(!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    // Add edges (undirected graph)
    auto addEdge = [&](int u, int v) {
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
    
    cout << "Graph (Adjacency List):\n";
    for(int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": ";
        for(int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    
    // Initialize visited array
    for(int i = 0; i < V; i++) {
        visited[i] = 0;
    }
    
    cout << "DFS Traversal starting from vertex 0:\n";
    cout << "Visited vertices: ";
    dfs(0);
    cout << endl;
    
    // Check if all vertices are reachable
    cout << "\nReachability from vertex 0:\n";
    for(int i = 0; i < V; i++) {
        if(visited[i]) {
            cout << "Vertex " << i << ": Reachable\n";
        } else {
            cout << "Vertex " << i << ": Not reachable\n";
        }
    }
    
    return 0;
}
