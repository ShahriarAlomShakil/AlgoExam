#include <iostream>
#include <vector>
using namespace std;

const int V = 6; // number of vertices
vector<int> adj[V]; // adjacency list using array of vectors
int visited[V];
int stack[V];
int top = -1;

void dfs(int vertex) {
    visited[vertex] = 1;
    
    // Visit all adjacent vertices
    for(int neighbor : adj[vertex]) {
        if(!visited[neighbor]) {
            dfs(neighbor);
        }
    }
    
    // Push vertex to stack after visiting all its descendants
    stack[++top] = vertex;
}

int main() {
    // Add edges (directed graph)
    auto addEdge = [&](int u, int v) {
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
    
    cout << "Topological Sorting using DFS:\n";
    cout << "Directed Graph (Adjacency List):\n";
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
    
    // Call DFS for all vertices
    for(int i = 0; i < V; i++) {
        if(!visited[i]) {
            dfs(i);
        }
    }
    
    // Print topological order
    cout << "\nTopological Order: ";
    while(top >= 0) {
        cout << stack[top--] << " ";
    }
    cout << endl;
    
    // Alternative method using in-degree (Kahn's algorithm)
    cout << "\nAlternative - Using In-degree method:\n";
    
    int indegree[V] = {0};
    
    // Calculate in-degree for each vertex
    for(int i = 0; i < V; i++) {
        for(int neighbor : adj[i]) {
            indegree[neighbor]++;
        }
    }
    
    cout << "Initial in-degrees: ";
    for(int i = 0; i < V; i++) {
        cout << "V" << i << "(" << indegree[i] << ") ";
    }
    cout << endl;
    
    int queue[V];
    int front = 0, rear = 0;
    int result[V];
    int resultIndex = 0;
    
    // Add all vertices with in-degree 0 to queue
    for(int i = 0; i < V; i++) {
        if(indegree[i] == 0) {
            queue[rear++] = i;
        }
    }
    
    cout << "Topological order (Kahn's algorithm): ";
    while(front < rear) {
        int vertex = queue[front++];
        result[resultIndex++] = vertex;
        cout << vertex << " ";
        
        // Reduce in-degree of all adjacent vertices
        for(int neighbor : adj[vertex]) {
            indegree[neighbor]--;
            if(indegree[neighbor] == 0) {
                queue[rear++] = neighbor;
            }
        }
    }
    cout << endl;
    
    return 0;
}