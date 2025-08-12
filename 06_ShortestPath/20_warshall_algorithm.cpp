#include <iostream>
using namespace std;

int main()
{
    int V = 4;

    // Warshall's algorithm for transitive closure (path matrix)
    int graph[4][4] = {
        {0, 1, 0, 1}, // 0 -> 1, 0 -> 3 (1 = path exists, 0 = no direct path)
        {0, 0, 1, 0}, // 1 -> 2
        {0, 0, 0, 1}, // 2 -> 3
        {0, 0, 0, 0}  // 3 has no outgoing edges
    };

    // Warshall's algorithm for transitive closure
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }

    cout << "\nTransitive closure (path matrix):\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}