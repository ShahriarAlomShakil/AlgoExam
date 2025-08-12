#include <iostream>
#include <vector>
using namespace std;

const int V = 4; // number of vertices
const int E = 5; // number of edges

int main()
{
    // Edge list: {weight, src, dest}
    int edges[E][3] = {
        {10, 0, 1},
        {6, 0, 2},
        {5, 0, 3},
        {15, 1, 3},
        {4, 2, 3}};

    // Create adjacency list for display purposes
    vector<pair<int, int>> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u = edges[i][1];
        int v = edges[i][2];
        int w = edges[i][0];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // Sort edges by weight (simple bubble sort)
    for (int i = 0; i < E - 1; i++)
    {
        for (int j = 0; j < E - i - 1; j++)
        {
            if (edges[j][0] > edges[j + 1][0])
            {
                // Swap entire edge
                for (int k = 0; k < 3; k++)
                {
                    swap(edges[j][k], edges[j + 1][k]);
                }
            }
        }
    }

    // Union-Find data structure (simple implementation)
    int parent[V];
    for (int i = 0; i < V; i++)
    {
        parent[i] = i; // each vertex is its own parent initially
    }

    // Find operation
    auto find = [&](int x) -> int
    {
        while (parent[x] != x)
        {
            x = parent[x];
        }
        return x;
    };

    int mstWeight = 0;
    int edgesUsed = 0;

    cout << "\nMST Construction Process:\n";

    for (int i = 0; i < E && edgesUsed < V - 1; i++)
    {
        int weight = edges[i][0];
        int src = edges[i][1];
        int dest = edges[i][2];

        int rootSrc = find(src);
        int rootDest = find(dest);

        if (rootSrc != rootDest)
        {
            // No cycle formed, include this edge
            cout << "Include edge: " << src << " - " << dest
                 << " (weight: " << weight << ")\n";
            mstWeight += weight;
            edgesUsed++;

            // Union: make one root parent of other
            parent[rootSrc] = rootDest;
        }
        else
        {
            cout << "Skip edge: " << src << " - " << dest
                 << " (would form cycle)\n";
        }
    }

    cout << "\nMinimum Spanning Tree:\n";
    cout << "Total weight: " << mstWeight << endl;
    cout << "Number of edges in MST: " << edgesUsed << endl;

    return 0;
}