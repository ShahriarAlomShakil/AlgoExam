#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int V = 4;
    const int INF = 99999;
    
    // Adjacency list using array of vectors
    vector<pair<int, int>> graph[V];
    
    // Add edges: {destination, weight}
    graph[0].push_back({1, 5});
    graph[0].push_back({3, 10});
    graph[1].push_back({2, 3});
    graph[2].push_back({3, 1});
    
    // Initialize distance matrix
    int dist[V][V];
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    
    // Fill distances from adjacency list
    for(int i = 0; i < V; i++) {
        for(auto& edge : graph[i]) {
            dist[i][edge.first] = edge.second;
        }
    }
    
    cout << "Floyd-Warshall Algorithm - Shortest Paths:\n\n";
    
    // Print initial matrix
    cout << "Initial distance matrix:\n";
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            if(dist[i][j] == INF) cout << "∞\t";
            else cout << dist[i][j] << "\t";
        }
        cout << "\n";
    }
    
    // Floyd-Warshall algorithm
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    // Print final result
    cout << "\nFinal shortest distances:\n";
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            if(dist[i][j] == INF) cout << "∞\t";
            else cout << dist[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}
