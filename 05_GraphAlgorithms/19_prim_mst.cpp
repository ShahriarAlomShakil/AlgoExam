#include <iostream>
#include <vector>
using namespace std;

const int V = 5; // number of vertices
vector<pair<int, int>> adj[V]; // adjacency list: {neighbor, weight}

int main() {
    // Add edges (undirected graph with weights)
    auto addEdge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };
    
    // Build the graph
    addEdge(0, 1, 2);
    addEdge(0, 3, 6);
    addEdge(1, 2, 3);
    addEdge(1, 3, 8);
    addEdge(1, 4, 5);
    addEdge(2, 4, 7);
    addEdge(3, 4, 9);
    
    cout << "Prim's Minimum Spanning Tree Algorithm:\n";
    cout << "Graph (Adjacency List with weights):\n";
    for(int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": ";
        for(auto edge : adj[i]) {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << endl;
    }
    
    int selected[V]; // track vertices included in MST
    int parent[V];   // store MST
    int key[V];      // key values to pick minimum weight edge
    
    // Initialize all keys as infinite and selected as false
    for(int i = 0; i < V; i++) {
        key[i] = 999999; // represent infinity
        selected[i] = 0;
        parent[i] = -1;
    }
    
    // Start with vertex 0
    key[0] = 0;
    
    cout << "\nMST Construction Process:\n";
    
    for(int count = 0; count < V; count++) {
        // Find vertex with minimum key value
        int minKey = 999999;
        int minIndex = -1;
        
        for(int v = 0; v < V; v++) {
            if(!selected[v] && key[v] < minKey) {
                minKey = key[v];
                minIndex = v;
            }
        }
        
        // Include the picked vertex in MST
        selected[minIndex] = 1;
        
        if(parent[minIndex] != -1) {
            cout << "Add edge: " << parent[minIndex] << " - " 
                 << minIndex << " (weight: " << key[minIndex] << ")\n";
        } else {
            cout << "Start with vertex: " << minIndex << endl;
        }
        
        // Update key values of adjacent vertices
        for(auto edge : adj[minIndex]) {
            int v = edge.first;
            int weight = edge.second;
            
            if(!selected[v] && weight < key[v]) {
                parent[v] = minIndex;
                key[v] = weight;
            }
        }
        
        // Show current key values
        cout << "Key values: ";
        for(int i = 0; i < V; i++) {
            if(key[i] == 999999) {
                cout << "∞ ";
            } else {
                cout << key[i] << " ";
            }
        }
        cout << endl;
    }
    
    // Print the constructed MST
    cout << "\nMinimum Spanning Tree:\n";
    int totalWeight = 0;
    cout << "Edges in MST:\n";
    
    for(int i = 1; i < V; i++) {
        // Find the weight of the edge from parent[i] to i
        int edgeWeight = 0;
        for(auto edge : adj[parent[i]]) {
            if(edge.first == i) {
                edgeWeight = edge.second;
                break;
            }
        }
        
        cout << parent[i] << " - " << i << " (weight: " << edgeWeight << ")\n";
        totalWeight += edgeWeight;
    }
    
    cout << "Total weight of MST: " << totalWeight << endl;
    
    return 0;
}