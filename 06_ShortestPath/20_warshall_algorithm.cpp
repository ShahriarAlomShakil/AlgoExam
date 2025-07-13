#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 4;
    
    // Adjacency list using array of vectors
    vector<int> adj[4];
    
    // Add edges
    adj[0].push_back(1);  // 0 -> 1
    adj[1].push_back(2);  // 1 -> 2  
    adj[2].push_back(3);  // 2 -> 3
    adj[3].push_back(0);  // 3 -> 0
    
    // Convert to adjacency matrix for Warshall's algorithm
    int graph[4][4] = {0};
    
    // Fill matrix from adjacency list
    for(int i = 0; i < V; i++) {
        graph[i][i] = 1;  // Self loop
        for(int neighbor : adj[i]) {
            graph[i][neighbor] = 1;
        }
    }
    
    cout << "Original matrix:\n";
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    
    // Warshall's algorithm
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
    
    cout << "\nTransitive closure:\n";
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}