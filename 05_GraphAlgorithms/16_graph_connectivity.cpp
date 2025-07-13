#include <iostream>
#include <vector>
using namespace std;

const int V = 5; // number of vertices
vector<int> adj[V]; // adjacency list using array of vectors
int visited[V];

void dfs(int vertex) {
    visited[vertex] = 1;
    
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
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(2, 4);
    addEdge(3, 4);
    
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
    
    // Start DFS from vertex 0
    dfs(0);
    
    // Check if all vertices are visited
    bool isConnected = true;
    cout << "Reachability from vertex 0:\n";
    for(int i = 0; i < V; i++) {
        if(visited[i]) {
            cout << "Vertex " << i << ": Reachable\n";
        } else {
            cout << "Vertex " << i << ": Not reachable\n";
            isConnected = false;
        }
    }
    
    if(isConnected) {
        cout << "\nResult: Graph is CONNECTED\n";
    } else {
        cout << "\nResult: Graph is NOT CONNECTED\n";
    }
    
    // Count number of connected components
    int components = 0;
    
    // Reset visited array
    for(int i = 0; i < V; i++) {
        visited[i] = 0;
    }
    
    cout << "\nConnected Components:\n";
    for(int i = 0; i < V; i++) {
        if(!visited[i]) {
            components++;
            cout << "Component " << components << ": ";
            
            // Print vertices in this component
            int startVisited[V];
            for(int j = 0; j < V; j++) startVisited[j] = visited[j];
            
            dfs(i);
            
            for(int j = 0; j < V; j++) {
                if(!startVisited[j] && visited[j]) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    
    cout << "Total connected components: " << components << endl;
    
    return 0;
}